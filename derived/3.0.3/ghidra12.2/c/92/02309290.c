
void FUN_02309290(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_54;
  undefined **local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1 + 4);
  if (*(long *)puVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0 && *param_1 != '\0')) {
      pcVar1 = param_1 + 0xc;
      local_50 = &PTR_FUN_04a72ea0;
      iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      pcStack_48 = pcVar1;
      if (iVar2 != 0) {
        lVar5 = (long)iVar2 << 3;
        puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_50)(&local_50,*puVar6);
          lVar5 = lVar5 + -8;
          puVar6 = puVar6 + 1;
        } while (lVar5 != 0);
        if (*param_1 == '\0') {
          return;
        }
      }
      local_54 = 0x1d;
      FUN_02548b40(&local_54,pcVar1);
    }
  }
  return;
}

