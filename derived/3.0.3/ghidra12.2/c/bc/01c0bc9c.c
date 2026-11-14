
void FUN_01c0bc9c(undefined4 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  long lVar10;
  undefined1 uVar11;
  byte bVar12;
  long lVar13;
  ushort local_74 [2];
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  byte local_5d;
  undefined4 local_5c;
  long local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_3);
  lVar13 = *(long *)puVar1;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (uVar4 < *(uint *)(lVar10 + 0x1d8)) {
      bVar3 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0;
      goto LAB_01c0bd18;
    }
  }
  bVar3 = false;
LAB_01c0bd18:
  uVar9 = *param_3;
  *(undefined2 *)param_1 = uVar9;
  uVar11 = *(undefined1 *)(param_3 + 1);
  bVar12 = *(byte *)((long)param_3 + 3);
  uVar6 = *(undefined4 *)(param_3 + 2);
  *(undefined1 *)((long)param_1 + 2) = uVar11;
  *(byte *)((long)param_1 + 3) = bVar12;
  param_1[1] = uVar6;
  puVar2 = PTR_DAT_04bc0510;
  if (bVar3) {
    local_68 = PTR_DAT_04bc0510 + 0x10;
    local_58 = 0;
    local_60 = uVar9;
    local_5e = uVar11;
    local_5d = bVar12;
    local_5c = uVar6;
    uVar4 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar1 != 0) {
      lVar10 = *(long *)(lVar13 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
          local_58 = lVar10;
        }
      }
    }
    uVar7 = FUN_01b032d0(&local_68);
    if ((((((uVar7 & 1) != 0) && (uVar7 = FUN_01b032d0(&local_68), (uVar7 & 1) != 0)) &&
         ((local_5d & 3) != 0)) &&
        ((uVar7 = FUN_01b032d0(&local_68), (uVar7 & 1) != 0 &&
         (uVar7 = FUN_01b032d0(&local_68), (uVar7 & 1) != 0)))) &&
       ((uVar7 = FUN_01b032d0(&local_68), (uVar7 & 1) != 0 &&
        (((local_5d & 3) != 0 && ((local_5d >> 6 & 1) != 0)))))) {
      FUN_01b079ec(&local_70,&local_68);
      *(undefined2 *)param_1 = (undefined2)local_70;
      *(undefined1 *)((long)param_1 + 2) = local_70._2_1_;
      *(byte *)((long)param_1 + 3) = local_70._3_1_;
      param_1[1] = local_6c;
      uVar9 = (undefined2)local_70;
      uVar11 = local_70._2_1_;
      bVar12 = local_70._3_1_;
      uVar6 = local_6c;
    }
    lVar10 = *(long *)puVar1;
    uVar4 = FUN_0277d6c4(param_1);
    if (*(long *)puVar1 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        iVar5 = FUN_0277d6c4(param_1);
        if (iVar5 == 0x16a2) {
          local_68 = puVar2 + 0x10;
          lVar10 = *(long *)puVar1;
          local_58 = 0;
          local_60 = uVar9;
          local_5e = uVar11;
          local_5d = bVar12;
          local_5c = uVar6;
          uVar4 = FUN_0277d6c4(&local_60);
          if (*(long *)puVar1 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar10 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(param_1);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
                 (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)
                 ) {
                local_58 = lVar10;
              }
            }
          }
          uVar7 = FUN_01af48b8(&local_68);
          if ((uVar7 & 1) == 0) {
            lVar10 = *(long *)PTR_DAT_04bb46f0;
            uVar6 = FUN_01b0c3c8(&local_68);
            FUN_0262eb00(&local_70,lVar10,uVar6,lVar10 + 0xe98e0);
            *param_1 = local_70;
            param_1[1] = local_6c;
          }
          else {
            FUN_026129ac(local_74,param_1);
            if ((local_74[0] < 0x800) &&
               ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(local_74[0] >> 3) + 0xe99e0) >>
                 (ulong)(local_74[0] & 7) & 1) != 0)) {
              puVar8 = &local_70;
              FUN_02621f00(&local_70);
            }
            else {
              puVar8 = (undefined4 *)&DAT_05586008;
              local_70._2_1_ = DAT_0558600a;
              local_70._3_1_ = DAT_0558600b;
            }
            uVar9 = *(undefined2 *)puVar8;
            *(undefined1 *)((long)param_1 + 2) = local_70._2_1_;
            *(byte *)((long)param_1 + 3) = local_70._3_1_;
            uVar6 = puVar8[1];
            *(undefined2 *)param_1 = uVar9;
            param_1[1] = uVar6;
          }
        }
        FUN_0277d6c4(param_1);
      }
    }
  }
  return;
}

