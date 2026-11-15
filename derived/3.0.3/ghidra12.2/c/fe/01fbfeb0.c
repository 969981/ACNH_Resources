
void FUN_01fbfeb0(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  short *psVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined *local_50;
  int local_48;
  int local_44;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(*param_2);
  if (*(long *)puVar4 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_70 = 0;
      if (DAT_05aed670 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar7 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar7 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      local_6c = *(undefined4 *)(puVar12 + 7);
      local_68 = FUN_017baf44();
      local_68 = local_68 & 1;
      local_78 = PTR_DAT_04bb3140 + 0x10;
      uVar8 = FUN_01a4fafc(&local_78,1,param_2 + 1);
      if ((uVar8 & 1) == 0) {
        return;
      }
      iVar2 = *(int *)(param_2 + 3);
      local_44 = *(int *)((long)param_2 + 0x1c);
      local_60 = param_2 + 2;
      local_58 = param_2 + 4;
      local_50 = PTR_DAT_04bb2010 + 0x10;
      iVar7 = *(int *)((long)param_2 + 0x2c) + 1;
      local_48 = iVar2;
      if (iVar7 != local_44) {
        do {
          uVar8 = FUN_01a4fd6c(&local_78,1,&local_50,1);
          if ((uVar8 & 1) == 0) {
            return;
          }
          if (local_48 < *(int *)(local_58 + 1)) {
            local_48 = local_48 + 1;
          }
          else {
            local_44 = local_44 + 1;
            local_48 = *(int *)(local_60 + 1);
          }
        } while (iVar2 != local_48 || iVar7 != local_44);
      }
    }
  }
  psVar1 = (short *)(param_1 + 0x11fc8);
  if ((((*(int *)(param_1 + 0x12030) != *(int *)(param_2 + 3)) ||
       (*(int *)(param_1 + 0x12034) != *(int *)((long)param_2 + 0x1c))) ||
      (*(int *)(param_1 + 0x12038) != *(int *)(param_2 + 10))) &&
     (((*psVar1 == -2 || (*(int *)(param_1 + 0x11ff8) != *(int *)(param_2 + 10))) ||
      ((*(int *)(param_1 + 0x11fe0) != *(int *)(param_2 + 3) ||
       (*(int *)(param_1 + 0x11fe4) != *(int *)((long)param_2 + 0x1c))))))) {
    psVar10 = (short *)*param_2;
    *psVar1 = *psVar10;
    *(char *)(param_1 + 0x11fca) = (char)psVar10[1];
    *(undefined1 *)(param_1 + 0x11fcb) = *(undefined1 *)((long)psVar10 + 3);
    local_58 = (undefined8 *)((ulong)local_58 & 0xffffffff00000000);
    *(undefined4 *)(param_1 + 0x11fcc) = *(undefined4 *)(psVar10 + 2);
    *(undefined4 *)(param_1 + 0x11fe0) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)(param_1 + 0x11fe4) = *(undefined4 *)((long)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x11ff0) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x11ff4) = *(undefined4 *)((long)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x11ff8) = *(undefined4 *)(param_2 + 10);
    *(undefined4 *)(param_1 + 0x11ffc) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x12000) = *(undefined4 *)((long)param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x12004) = *(undefined4 *)(param_2 + 7);
    lVar11 = *(long *)PTR_DAT_04bb2720;
    if (lVar11 == 0) {
      puVar12 = &DAT_055c04a0;
    }
    else {
      puVar12 = &DAT_055c04a0;
      if (*(long *)(lVar11 + 0x330) != 0) {
        puVar12 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar11 + 0x338));
        iVar7 = FUN_006bd550(*puVar12,0);
        puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar12 = &DAT_055c04a0;
        }
      }
    }
    local_58 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar12 + 7),(undefined4)local_58);
    uVar5 = FUN_017baf44();
    local_50 = (undefined *)(CONCAT71(local_50._1_7_,uVar5) & 0xffffffffffffff01);
    local_60 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
    uVar8 = FUN_014fe7fc(&local_60,param_1 + 0x11fd8,*(undefined4 *)(param_1 + 0x11ff8));
    iVar7 = 0x14;
    if ((uVar8 & 1) == 0) {
      iVar7 = 0;
    }
    lVar11 = *(long *)(param_1 + 8);
    uVar6 = *(uint *)(lVar11 + 0x288);
    *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
    uVar6 = uVar6 ^ uVar6 << 0xb;
    *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
    uVar3 = *(uint *)(lVar11 + 0x294);
    *(uint *)(lVar11 + 0x290) = uVar3;
    uVar6 = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
    *(uint *)(lVar11 + 0x294) = uVar6;
    piVar9 = (int *)(**(code **)(*(long *)(DAT_053e0208 + 96000) + 0xf0))();
    if ((uint)((ulong)uVar6 * 100 >> 0x20) < (uint)(*piVar9 + iVar7)) {
      uVar8 = FUN_01f9d6fc(param_1,psVar1,param_1 + 0x11fd0,1,0);
      if ((uVar8 & 1) == 0) {
        *psVar1 = DAT_05586008;
        *(undefined1 *)(param_1 + 0x11fca) = DAT_0558600a;
        *(undefined1 *)(param_1 + 0x11fcb) = DAT_0558600b;
        *(undefined4 *)(param_1 + 0x11fcc) = DAT_0558600c;
      }
      else {
        *(undefined1 *)(param_1 + 0x7878) = 1;
        *(undefined8 *)(param_1 + 0x12030) = *(undefined8 *)(param_1 + 0x11fe0);
        *(undefined4 *)(param_1 + 0x12038) = *(undefined4 *)(param_1 + 0x11ff8);
        *(undefined4 *)(param_1 + 0x1203c) = 0;
      }
    }
  }
  return;
}

