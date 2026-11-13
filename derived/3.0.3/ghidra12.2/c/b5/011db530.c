
void FUN_011db530(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined *local_80;
  undefined2 local_78;
  byte local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bbbc68;
  iVar8 = 0;
  piVar11 = (int *)(param_1 + 0x1dfb4);
  lVar12 = 0x19;
  do {
    if (((*(char *)(param_1 + 0x1e138 + (long)iVar8) != '\0') &&
        (piVar11[-1] == *(int *)(param_2 + 8))) && (*piVar11 == *(int *)(param_2 + 0xc))) {
      return;
    }
    iVar8 = iVar8 + 1;
    lVar12 = lVar12 + -1;
    piVar11 = piVar11 + 4;
  } while (lVar12 != 0);
  iVar8 = *(int *)(param_1 + 0x24f78);
  if (0 < iVar8) {
    lVar12 = 0;
    iVar13 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      lVar2 = param_1 + lVar12;
      if (((*(ushort *)(lVar2 + 0x2e0) >> 3 & 1) != 0) &&
         (*(int *)(lVar2 + 0x290) == *(int *)(param_2 + 8) &&
          *(int *)(lVar2 + 0x294) == *(int *)(param_2 + 0xc))) {
        local_68 = *(undefined2 *)(lVar2 + 0x278);
        local_66 = *(undefined2 *)(lVar2 + 0x27a);
        local_64 = *(undefined4 *)(lVar2 + 0x27c);
        lVar14 = *(long *)puVar5;
        if ((((lVar14 != 0) &&
             ((*(long *)(lVar14 + 0xb0) != 0 && (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)))) &&
            (*(long *)(lVar14 + 0x488) != 0)) &&
           (((*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0 && (*(long *)(lVar14 + 0x2b0) != 0)) &&
            (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)))) {
          uVar7 = FUN_0277d6c4(&local_68);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            FUN_0124c030(&local_80,&local_68);
            iVar8 = FUN_0123db50(&local_78,local_70);
            if ((iVar8 - 0x23U < 9) || (iVar8 = FUN_0123db50(&local_78,local_70), iVar8 - 0x12U < 6)
               ) {
              uVar10 = 0;
              goto LAB_011db7e8;
            }
          }
        }
        iVar8 = FUN_0277d6c4(&local_68);
        puVar4 = PTR_DAT_04bb43c0;
        if (iVar8 == 0x38d2) {
          bVar6 = (byte)local_66;
          local_76 = (byte)local_66;
          local_75 = local_66._1_1_;
          local_78 = local_68;
          local_74 = local_64;
          local_70 = 0;
          lVar14 = *(long *)PTR_DAT_04bb43c0;
          local_80 = puVar1;
          uVar7 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar4 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              lVar14 = *(long *)PTR_DAT_04bc0428;
              uVar7 = FUN_0277d6c4(&local_68);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
                 (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8), lVar14 != 0)
                 ) {
                local_70 = lVar14;
              }
            }
          }
          uVar9 = FUN_01ae59b0(&local_80);
          bVar3 = bVar6 >> 2 & 1;
          if ((uVar9 & 1) == 0) {
            bVar3 = bVar6 & 4;
          }
          if (bVar3 != 0) {
            uVar10 = 1;
LAB_011db7e8:
            FUN_011e5354(param_1,lVar2 + 0x278,uVar10);
            FUN_011dc2e0(param_1,param_2,0,0,0);
            FUN_011db9b8(param_1,param_2,0);
            return;
          }
        }
        iVar8 = *(int *)(param_1 + 0x24f78);
      }
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x78;
    } while (iVar13 < iVar8);
  }
  return;
}

