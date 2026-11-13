
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0122af90(undefined8 param_1,undefined1 *param_2,byte *param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  undefined1 uVar13;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  char local_67;
  byte local_64 [4];
  undefined1 auStack_48 [8];
  
  puVar4 = PTR_DAT_04bb27d0;
  lVar10 = **(long **)PTR_DAT_04bb27d0;
  bVar12 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar12 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x80;
    if (7 < bVar12) {
      pbVar2 = (byte *)(lVar10 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar10 + 0x472) != bVar12)) {
      bVar12 = param_3[2];
      if ((bVar12 & 0xc) != 0) {
        local_68 = *param_3;
        local_67 = '\0';
        local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_6c = *(int *)(PTR_DAT_04bb37e0 + 4);
        if (local_68 < 8) {
          uVar6 = FUN_02582d8c(&local_68,1);
          if ((((uVar6 < 8) &&
               (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
              (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) &&
             (local_67 == '\0')) {
            FUN_02556920(auStack_48,&local_68,1);
          }
        }
        else {
          local_68 = 0xff;
        }
        bVar12 = param_3[2];
        if ((bVar12 >> 3 & 1) != 0) {
          return;
        }
      }
      if (DAT_04c47fa4 < 10) {
        return;
      }
      if ((bVar12 & 1) != 0) {
        FUN_0252d11c(&local_70);
        bVar12 = *param_3;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        if (7 < (byte)local_70) {
          DAT_0514f758._0_1_ = bVar12;
          ram0x0514f759 = *(undefined2 *)(param_3 + 1);
          return;
        }
        if ((byte)local_70 != bVar12) {
          if ((param_3[2] >> 1 & 1) == 0) {
            return;
          }
          DAT_04c47fa4 = 10;
          return;
        }
      }
      DAT_04c47fa4 = (uint)param_3[1];
      return;
    }
  }
  local_64[0] = *param_3;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar10 = FUN_025830c0(DAT_055021a0,local_64,1);
  if (lVar10 == 0) {
    DAT_0514e3c0._0_1_ = *param_3;
    local_6c._2_2_ = (ushort)((uint)local_6c >> 0x10) & 0xff00;
    uVar13 = *param_2;
    unique0x0005a200 = (ushort)param_3[2] << 8 | 0xe;
    if (7 < (byte)DAT_0514e3c0) {
      DAT_0514e3c0._0_1_ = 0xff;
    }
  }
  else {
    if ((*(long **)(lVar10 + 0x17bb0) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar10 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar7)();
      uVar8 = uVar8 & 0xffffffff;
    }
    if (DAT_05574040 == 0) {
      lVar15 = 0;
      plVar11 = _DAT_00000098;
      if (_DAT_00000098 != (long *)0x0) goto LAB_0122b0e8;
LAB_0122b104:
      uVar6 = 1;
    }
    else {
      lVar9 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar15 = 0;
      if (lVar9 != 0) {
        lVar15 = lVar9 + 0x276cb0;
      }
      plVar11 = *(long **)(lVar15 + 0x98);
      if (*(long **)(lVar15 + 0x98) == (long *)0x0) goto LAB_0122b104;
LAB_0122b0e8:
      if ((undefined8 *)*plVar11 == (undefined8 *)0x0) goto LAB_0122b104;
      uVar6 = (*(code *)**(undefined8 **)*plVar11)();
      uVar6 = uVar6 ^ 1;
    }
    uVar14 = 0;
    bVar5 = true;
    plVar11 = (long *)(*(long *)(lVar15 + 0x80) + *(long *)(lVar15 + 0x78) + 0x20);
    piVar1 = (int *)(*(long *)(lVar10 + 0x17b98) + *(long *)(lVar10 + 0x17b90));
    do {
      iVar3 = (int)plVar11[-4];
      if (*(int *)((long)plVar11 + -4) == 0 || iVar3 == 0) {
        bVar16 = true;
        goto joined_r0x0122b1e0;
      }
      if ((*(int *)((long)plVar11 + -4) == piVar1[7]) &&
         ((*(long *)(piVar1 + 8) == *plVar11 && *(long *)(piVar1 + 10) == plVar11[1]) &&
          piVar1[0xc] == (int)plVar11[2])) {
        if ((*(short *)((long)plVar11 + -0x1c) == 0) || ((short)piVar1[1] == 0)) {
          if (iVar3 == *piVar1) goto LAB_0122b1d0;
        }
        else if ((iVar3 == *piVar1) &&
                ((*(long *)(piVar1 + 1) == *(long *)((long)plVar11 + -0x1c) &&
                 *(long *)(piVar1 + 3) == *(long *)((long)plVar11 + -0x14)) &&
                 piVar1[5] == *(int *)((long)plVar11 + -0xc))) {
LAB_0122b1d0:
          bVar16 = false;
          goto joined_r0x0122b1e0;
        }
      }
      bVar5 = uVar14 < 9;
      uVar14 = uVar14 + 1;
      plVar11 = plVar11 + 7;
    } while (uVar14 != 10);
    bVar16 = true;
    uVar14 = 0xff;
joined_r0x0122b1e0:
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar15 + 0x98) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar15 + 0x98) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x17bb0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (bVar5) {
      DAT_0514e3c0._0_1_ = *param_3;
      if (bVar16) {
        if (7 < (byte)DAT_0514e3c0) {
          DAT_0514e3c0._0_1_ = 0xff;
        }
        unique0x00075000 = *(ushort *)(param_3 + 1) & 0xff00 | 0xb;
        local_6c = (uint)local_6c._3_1_ << 0x18;
        local_6c._0_2_ = CONCAT11(*param_2,4);
      }
      else {
        if (7 < (byte)DAT_0514e3c0) {
          DAT_0514e3c0._0_1_ = 0xff;
        }
        unique0x00075000 = *(ushort *)(param_3 + 1) & 0xff00 | (ushort)uVar14 & 0xff;
        local_6c = (uint)local_6c._3_1_ << 0x18;
        local_6c._0_2_ = CONCAT11(*param_2,4);
      }
      goto joined_r0x0122b42c;
    }
    DAT_0514e3c0._0_1_ = *param_3;
    local_6c = (uint)local_6c._3_1_ << 0x18;
    unique0x0005a200 = (ushort)param_3[2] << 8 | 10;
    uVar13 = *param_2;
    if (7 < (byte)DAT_0514e3c0) {
      DAT_0514e3c0._0_1_ = 0xff;
    }
  }
  local_6c._0_2_ = CONCAT11(uVar13,4);
joined_r0x0122b42c:
  if (-1 < DAT_0514e398) {
    local_70 = 0;
    FUN_01db1df0(**(long **)puVar4 + 0x480,DAT_0514e398,&local_70,&DAT_0514e3c0,3,0);
  }
  return;
}

