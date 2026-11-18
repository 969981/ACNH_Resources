
void FUN_032c2300(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  ushort uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  char *pcVar22;
  undefined4 uVar23;
  undefined8 local_6c;
  undefined4 local_64;
  long local_48;
  
  puVar7 = PTR_DAT_04bc8e90;
  pcVar22 = *(char **)PTR_DAT_04bc8e90;
  uVar12 = (ulong)param_2;
  if (0xf < param_2) {
    uVar12 = 0;
  }
  plVar13 = (long *)(pcVar22 + 8);
  plVar17 = plVar13 + param_2;
  if (0xf < param_2) {
    plVar17 = plVar13;
  }
  lVar19 = *plVar17;
  uVar14 = *(ushort *)(param_1 + 10);
  uVar21 = (uint)uVar14;
  if ((uVar14 >> 3 & 1) == 0) {
    if (((((uVar14 & 1) != 0) && (local_6c._0_4_ = 1, (uVar14 >> 1 & 1) == 0)) &&
        (uVar12 = FUN_032c1eb0(param_1,lVar19 + 8,0), (uVar12 & 1) != 0)) &&
       ((*(char *)(lVar19 + 5) != '\0' || *(char *)((long)param_1 + 0x21e) != '\0' ||
        ((uVar14 >> 8 & 1) != 0)))) {
      if ((int)*(uint *)(pcVar22 + 4) < 1) {
        bVar9 = false;
      }
      else {
        uVar12 = 0;
        plVar17 = plVar13;
        bVar4 = false;
        do {
          plVar1 = plVar17;
          if (0xf < uVar12) {
            plVar1 = plVar13;
          }
          lVar20 = *(long *)(*plVar1 + 0x30);
          bVar9 = (bool)(lVar20 != 0 | bVar4);
          if ((lVar20 != 0) && (!bVar4)) {
            bVar9 = *(char *)(lVar20 + 0x21d) != '\0';
          }
          uVar12 = uVar12 + 1;
          plVar17 = plVar17 + 1;
          bVar4 = bVar9;
        } while (*(uint *)(pcVar22 + 4) != uVar12);
      }
      if ((bVar9) || (*pcVar22 != '\0')) {
        if ((int)param_1[0x43] == 0) {
          plVar13 = param_1;
          while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
            local_6c._0_4_ = *(int *)(plVar13 + 0x43);
            if ((int)local_6c != 0) {
              FUN_032c2c40(param_1,param_2);
              return;
            }
          }
        }
        else {
          *(undefined1 *)((long)param_1 + 0x21e) = 1;
        }
      }
      if (param_1[4] != 0) {
        local_6c = 0;
        local_64 = 0;
        local_48 = param_1[4];
        FUN_032d3460(&local_48,&local_6c);
        puVar7 = PTR_DAT_04bc9358;
        uVar23 = (int)local_6c;
        local_6c._0_4_ = 3;
        uVar8 = (int)local_6c;
        puVar15 = *(uint **)PTR_DAT_04bc9358;
        local_6c._0_4_ = 3;
        if (*puVar15 < 4) {
          local_6c._0_4_ = 0;
        }
        puVar16 = (undefined4 *)(*(long *)(puVar15 + 2) + (long)(int)local_6c * 0xc);
        *puVar16 = uVar23;
        puVar16[1] = local_6c._4_4_;
        puVar6 = PTR_DAT_04bb4fb0;
        local_6c._0_4_ = 3;
        if (*puVar15 < 4) {
          local_6c._0_4_ = 0;
        }
        *(undefined1 *)(*(long *)(puVar15 + 2) + (long)(int)local_6c * 0xc + 8) = 1;
        lVar18 = *(long *)puVar6;
        local_6c._0_4_ = uVar8;
        uVar11 = FUN_03368ef0(*(undefined8 *)puVar7,3);
        lVar20 = *(long *)(lVar18 + 8);
        if (lVar20 != 0) {
          lVar2 = 0;
          if (*(char *)(lVar20 + 0x38) != '\0') {
            lVar2 = lVar20 + 8;
          }
          FUN_03366350(lVar18,lVar2,s_TouchSelect_04b20a17,1,uVar11,0);
        }
      }
      local_6c = CONCAT44(local_6c._4_4_,4);
      *(undefined1 *)((long)param_1 + 0x52) = 0;
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 0x18;
      if ((long *)param_1[0xc] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0xc] + 0x20))();
      }
      if ((long *)param_1[0x18] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x18] + 0x20))();
      }
      if (*(char *)((long)param_1 + 0x21c) == '\0') {
        *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(lVar19 + 8);
        uVar23 = *(undefined4 *)(lVar19 + 0xc);
        *(undefined2 *)((long)param_1 + 0x21c) = 1;
        *(undefined4 *)((long)param_1 + 0x214) = uVar23;
      }
    }
  }
  else {
    if ((uVar14 >> 2 & 1) == 0) {
      local_6c = CONCAT44(local_6c._4_4_,(int)param_1[0x43]);
      if ((((int)param_1[0x43] != 0) && (*(char *)((long)param_1 + 0x21d) != '\0')) &&
         (plVar13 = (long *)param_1[0x3c], plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x20))(plVar13,lVar19 + 0x20);
      }
      if ((long *)param_1[0x12] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x12] + 0x20))();
      }
      uVar14 = *(ushort *)(param_1 + 10);
      if ((((uVar14 >> 4 & 1) != 0) &&
          (local_6c = CONCAT44(local_6c._4_4_,1), (uVar14 >> 1 & 1) == 0)) &&
         ((long *)param_1[0x1e] != (long *)0x0)) {
        (**(code **)(*(long *)param_1[0x1e] + 0x20))();
        uVar14 = *(ushort *)(param_1 + 10);
      }
      *(undefined2 *)((long)param_1 + 0x21c) = 0;
      *(undefined1 *)((long)param_1 + 0x21e) = 0;
    }
    else {
      local_6c._0_4_ = 4;
      if (((uVar14 >> 4 & 1) != 0) &&
         (uVar10 = FUN_032c1eb0(param_1,lVar19 + 8,0), (uVar10 & 1) == 0)) {
        if (param_1[4] != 0) {
          local_6c = 0;
          local_64 = 0;
          local_48 = param_1[4];
          FUN_032d3460(&local_48,&local_6c);
          puVar6 = PTR_DAT_04bc9358;
          uVar23 = (int)local_6c;
          local_6c._0_4_ = 3;
          uVar8 = (int)local_6c;
          puVar15 = *(uint **)PTR_DAT_04bc9358;
          local_6c._0_4_ = 3;
          if (*puVar15 < 4) {
            local_6c._0_4_ = 0;
          }
          puVar16 = (undefined4 *)(*(long *)(puVar15 + 2) + (long)(int)local_6c * 0xc);
          *puVar16 = uVar23;
          puVar16[1] = local_6c._4_4_;
          puVar5 = PTR_DAT_04bb4fb0;
          iVar3 = 3;
          if (*puVar15 < 4) {
            iVar3 = 0;
          }
          *(undefined1 *)(*(long *)(puVar15 + 2) + (long)iVar3 * 0xc + 8) = 1;
          lVar20 = *(long *)puVar5;
          local_6c._0_4_ = uVar8;
          uVar11 = FUN_03368ef0(*(undefined8 *)puVar6,3);
          lVar19 = *(long *)(lVar20 + 8);
          if (lVar19 != 0) {
            lVar18 = 0;
            if (*(char *)(lVar19 + 0x38) != '\0') {
              lVar18 = lVar19 + 8;
            }
            FUN_03366350(lVar20,lVar18,s_TouchUnselect_04b20a24,1,uVar11,0);
          }
        }
        if ((long *)param_1[0x24] != (long *)0x0) {
          (**(code **)(*(long *)param_1[0x24] + 0x20))();
        }
        uVar21 = *(ushort *)(param_1 + 10) & 0xffffffef;
        *(short *)(param_1 + 10) = (short)uVar21;
      }
      if ((uVar21 >> 8 & 1) == 0) {
        return;
      }
      if (*(long **)(plVar13[uVar12] + 0x38) == param_1) {
        return;
      }
      local_6c = CONCAT44(local_6c._4_4_,4);
      if ((uVar21 >> 4 & 1) != 0) {
        if (param_1[4] != 0) {
          local_6c = 0;
          local_64 = 0;
          local_48 = param_1[4];
          FUN_032d3460(&local_48,&local_6c);
          puVar6 = PTR_DAT_04bc9358;
          uVar23 = (int)local_6c;
          local_6c = CONCAT44(local_6c._4_4_,3);
          uVar11 = local_6c;
          puVar15 = *(uint **)PTR_DAT_04bc9358;
          local_6c._0_4_ = 3;
          if (*puVar15 < 4) {
            local_6c._0_4_ = 0;
          }
          puVar16 = (undefined4 *)(*(long *)(puVar15 + 2) + (long)(int)local_6c * 0xc);
          *puVar16 = uVar23;
          puVar16[1] = local_6c._4_4_;
          puVar5 = PTR_DAT_04bb4fb0;
          iVar3 = 3;
          if (*puVar15 < 4) {
            iVar3 = 0;
          }
          *(undefined1 *)(*(long *)(puVar15 + 2) + (long)iVar3 * 0xc + 8) = 1;
          lVar20 = *(long *)puVar5;
          local_6c = uVar11;
          uVar11 = FUN_03368ef0(*(undefined8 *)puVar6,3);
          lVar19 = *(long *)(lVar20 + 8);
          if (lVar19 != 0) {
            lVar18 = 0;
            if (*(char *)(lVar19 + 0x38) != '\0') {
              lVar18 = lVar19 + 8;
            }
            FUN_03366350(lVar20,lVar18,s_TouchUnselect_04b20a24,1,uVar11,0);
          }
        }
        if ((long *)param_1[0x24] != (long *)0x0) {
          (**(code **)(*(long *)param_1[0x24] + 0x20))();
        }
        local_6c = CONCAT44(local_6c._4_4_,4);
        uVar21 = *(ushort *)(param_1 + 10) & 0xffffffef;
        *(short *)(param_1 + 10) = (short)uVar21;
      }
      if ((long *)param_1[0x12] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x12] + 0x20))();
        uVar21 = (uint)*(ushort *)(param_1 + 10);
      }
      uVar14 = (ushort)uVar21;
      if ((((uVar21 >> 4 & 1) != 0) &&
          (local_6c = CONCAT44(local_6c._4_4_,1), (uVar21 >> 1 & 1) == 0)) &&
         ((long *)param_1[0x1e] != (long *)0x0)) {
        (**(code **)(*(long *)param_1[0x1e] + 0x20))();
        uVar14 = *(ushort *)(param_1 + 10);
      }
      *(undefined2 *)((long)param_1 + 0x21c) = 0;
      *(undefined1 *)((long)param_1 + 0x21e) = 0;
    }
    *(ushort *)(param_1 + 10) = uVar14 & 0xffe7;
    plVar13 = (long *)(*(long *)puVar7 + 8) + param_2;
    if (0xf < param_2) {
      plVar13 = (long *)(*(long *)puVar7 + 8);
    }
    *(undefined8 *)(*plVar13 + 0x30) = 0;
  }
  return;
}

