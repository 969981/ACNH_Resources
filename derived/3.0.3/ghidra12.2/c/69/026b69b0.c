
void FUN_026b69b0(long param_1,long *param_2,int *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (param_2 != (long *)0x0) {
    iVar6 = 0;
    param_1 = param_1 + 0x112ec;
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    do {
      lVar5 = param_1 + (long)iVar6 * 0x4c;
      uVar2 = FUN_0277d6c4(lVar5);
      lVar3 = *(long *)puVar1;
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if (((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
           (((*(int *)(param_1 + (long)iVar6 * 0x4c + 8) == *param_3 &&
             (lVar4 = param_1 + (long)iVar6 * 0x4c,
             (*(long *)(param_3 + 1) == *(long *)(lVar4 + 0xc) &&
             *(long *)(param_3 + 3) == *(long *)(lVar4 + 0x14)) &&
             param_3[5] == *(int *)(lVar4 + 0x1c))) ||
            ((*(int *)(param_1 + (long)iVar6 * 0x4c + 0x24) == *param_3 &&
             (lVar4 = param_1 + (long)iVar6 * 0x4c,
             (*(long *)(param_3 + 1) == *(long *)(lVar4 + 0x28) &&
             *(long *)(param_3 + 3) == *(long *)(lVar4 + 0x30)) &&
             param_3[5] == *(int *)(lVar4 + 0x38))))))) {
          lVar4 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(lVar5);
          lVar3 = *(long *)puVar1;
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar5 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar4 + lVar5) =
                 *(uint *)(lVar4 + lVar5) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar3;
    } while (iVar6 != 0x40);
  }
  return;
}

