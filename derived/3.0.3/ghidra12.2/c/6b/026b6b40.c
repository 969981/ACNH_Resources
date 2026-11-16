
void FUN_026b6b40(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (param_2 != (long *)0x0) {
    iVar7 = 0;
    param_1 = param_1 + 0x112ec;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    do {
      lVar6 = param_1 + (long)iVar7 * 0x4c;
      uVar3 = FUN_0277d6c4(lVar6);
      lVar4 = *(long *)puVar2;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((((((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
              ((iVar1 = *(int *)(param_1 + (long)iVar7 * 0x4c + 8), iVar1 != 0 ||
               (*(int *)(param_1 + (long)iVar7 * 0x4c + 0x24) != 0)))) &&
             ((iVar1 != *param_3 ||
              (lVar5 = param_1 + (long)iVar7 * 0x4c,
              (*(long *)(param_3 + 1) != *(long *)(lVar5 + 0xc) ||
              *(long *)(param_3 + 3) != *(long *)(lVar5 + 0x14)) ||
              param_3[5] != *(int *)(lVar5 + 0x1c))))) &&
            ((*(int *)(param_1 + (long)iVar7 * 0x4c + 0x24) != *param_3 ||
             (lVar5 = param_1 + (long)iVar7 * 0x4c,
             (*(long *)(param_3 + 1) != *(long *)(lVar5 + 0x28) ||
             *(long *)(param_3 + 3) != *(long *)(lVar5 + 0x30)) ||
             param_3[5] != *(int *)(lVar5 + 0x38))))) &&
           (*(byte *)(param_1 + (long)iVar7 * 0x4c + 0x48) < 0xb)) {
          lVar5 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar3 = FUN_0277d6c4(lVar6);
          lVar4 = *(long *)puVar2;
          if ((uVar3 >> 3 & 0x1fff) < 0x753) {
            lVar6 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
            *(uint *)(lVar5 + lVar6) =
                 *(uint *)(lVar5 + lVar6) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar4;
    } while (iVar7 != 0x40);
  }
  return;
}

