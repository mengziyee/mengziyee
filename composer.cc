{
    "name": "laravel/laravel",
    "description": "The Laravel Framework.",
    "keywords": ["framework", "laravel"],
    "license": "MIT",
    "type": "project",
    "require": {
        "php": ">=5.6.4",
        "barryvdh/laravel-debugbar": "^2.4",
        "barryvdh/laravel-ide-helper": "^2.4",
        "darkaonline/l5-swagger": "5.4.*",
        "doctrine/annotations": " 1.4.*",
        "doctrine/dbal": "^2.7",
        "guzzlehttp/guzzle": "^6.3",
        "laravel/framework": "5.4.*",
        "laravel/tinker": "~1.0",
        "overtrue/laravel-wechat": "~3.0",
        "predis/predis": "^1.1",
        "sentry/sentry-laravel": "^0.8.0"
    },
    "require-dev": {
        "fzaninotto/faker": "~1.4",
        "mockery/mockery": "0.9.*",
        "phpunit/phpunit": "~5.7"
    },
    "autoload": {
        "classmap": [
            "database/seeds",
            "database/factories"
        ],
        "psr-4": {
            "App\\": "app/"
        }
    },
    "autoload-dev": {
        "psr-4": {
            "Tests\\": "tests/"
        }
    },
    "scripts": {
        "post-root-package-install": [
            "php -r \"file_exists('.env') || copy('.env.example', '.env');\""
        ],
        "post-create-project-cmd": [
            "php artisan key:generate"
        ],
        "post-install-cmd": [
            "Illuminate\\Foundation\\ComposerScripts::postInstall",
            "php artisan optimize"
        ],
        "post-update-cmd": [
            "Illuminate\\Foundation\\ComposerScripts::postUpdate",
            "php artisan optimize"
        ]
    },
    "config": {
        "preferred-install": "dist",
        "sort-packages": true,
        "optimize-autoloader": true
    },
    "repositories": {
        "packagist": {
            "type": "composer",
            "url": "https://packagist.phpcomposer.com"
        }
    }
}
