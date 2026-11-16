
uint FUN_026738b0(byte *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  byte local_44 [4];
  
  if (7 < *param_1) {
    return 0;
  }
  uVar2 = FUN_02582d8c(param_1,1);
  if ((((uVar2 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) ||
     (((*param_1 < 8 && (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
      ((lVar3 = *(long *)PTR_DAT_04bb4fb8, *(char *)(lVar3 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0'
       && ((*(char *)(lVar3 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0' &&
           (*(int *)(lVar3 + (ulong)uVar2 * 0x13f0 + 0x13d0) == 1)))))))) {
    puVar1 = PTR_DAT_04bb43c0;
    lVar3 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_2);
    if (*(long *)puVar1 != 0) {
      lVar3 = *(long *)(lVar3 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_44[0] = *param_1;
        if (7 < local_44[0]) {
          local_44[0] = 0xff;
        }
        lVar3 = FUN_02583354(DAT_055021a0,local_44,1);
        uVar2 = 0;
        if (lVar3 != 0) {
          uVar2 = FUN_02673a50(lVar3,param_2,param_3,param_4);
        }
        goto LAB_02673a34;
      }
    }
  }
  uVar2 = 0;
LAB_02673a34:
  return uVar2 & 1;
}

