
undefined8 FUN_02830264(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0282a5c0(param_1 + 0xb79c);
  if (((((uVar1 & 1) == 0) || (uVar1 = FUN_0282a5c0(param_1 + 0xba58), (uVar1 & 1) == 0)) ||
      (uVar1 = FUN_0282a5c0(param_1 + 0xbd14), (uVar1 & 1) == 0)) ||
     (((uVar1 = FUN_0282a5c0(param_1 + 0xbfd0), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_0282a5c0(param_1 + 0xc28c), (uVar1 & 1) == 0)) ||
      ((uVar1 = FUN_0282a5c0(param_1 + 0xc548), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_0282a5c0(param_1 + 0xc804), (uVar1 & 1) == 0)))))) {
    return 0;
  }
  uVar2 = FUN_0282a5c0(param_1 + 0xcac0);
  return uVar2;
}

