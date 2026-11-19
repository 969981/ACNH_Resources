
void FUN_03a37090(long param_1,undefined4 *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 local_490;
  undefined8 local_48c;
  undefined1 local_484;
  undefined *local_480;
  long local_478;
  undefined8 local_470;
  undefined2 local_468;
  undefined1 local_6d;
  
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    plVar10 = malloc(0xc0);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar16 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_03a37128;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0xc0,8);
  }
LAB_03a37128:
  *(undefined4 *)(plVar10 + 1) = 0;
  puVar1 = PTR_DAT_04bd1998;
  plVar10[2] = 0;
  plVar10[3] = 0x103;
  plVar10[4] = 0x5a00000022;
  plVar10[5] = 0x1d00000022;
  *(undefined4 *)(plVar10 + 8) = 9;
  *plVar10 = (long)(puVar1 + 0x10);
  plVar10[6] = 0x220000001d;
  plVar10[7] = 0x900000001;
  FUN_038e18e4(plVar10 + 9);
  plVar10[0x11] = 0;
  plVar10[0x12] = 0x3f80000000000000;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0x3f80000000000000;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0x3f80000000000000;
  plVar10[0x17] = 0x40000000;
  *(long **)(param_1 + 0x248) = plVar10;
  FUN_03af4dd0(plVar10,*param_2,param_3,param_4);
  uVar13 = 0x22;
  if (*(char *)(*(long *)(param_1 + 8) + 0x950) != '\0') {
    uVar13 = 0x1a;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x20) = uVar13;
  uVar14 = 0x1d;
  if (*(char *)(*(long *)(param_1 + 8) + 0x1220) != '\0') {
    uVar14 = 0x21;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x30) = uVar14;
  uVar14 = 0x22;
  if (*(char *)(*(long *)(param_1 + 8) + 0x1260) != '\0') {
    uVar14 = 0x1d;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x34) = uVar14;
  uVar14 = 10;
  if (*(int *)(*(long *)(param_1 + 8) + 0x1300) == 0) {
    uVar14 = 1;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x38) = uVar14;
  *(uint *)(*(long *)(param_1 + 0x248) + 0x18) =
       *(uint *)(*(long *)(param_1 + 0x248) + 0x18) & 0xfffbffff |
       (uint)*(byte *)(*(long *)(param_1 + 8) + 0x10e0) << 0x12;
  if (*(char *)(*(long *)(param_1 + 8) + 0x1120) != '\0') {
    uVar13 = 0x22;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x28) = uVar13;
  *(uint *)(*(long *)(param_1 + 0x248) + 0x18) =
       *(uint *)(*(long *)(param_1 + 0x248) + 0x18) & 0xfffeffff |
       (uint)*(byte *)(*(long *)(param_1 + 8) + 0x1240) << 0x10;
  *(uint *)(*(long *)(param_1 + 0x248) + 0x18) =
       *(uint *)(*(long *)(param_1 + 0x248) + 0x18) & 0xfffdffff |
       (uint)*(byte *)(*(long *)(param_1 + 8) + 0x12a0) << 0x11;
  uVar13 = 9;
  if (*(char *)(*(long *)(param_1 + 8) + 0x10a0) != '\0') {
    uVar13 = 0x14;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x3c) = uVar13;
  uVar13 = 9;
  if (*(char *)(*(long *)(param_1 + 8) + 0x10c0) != '\0') {
    uVar13 = 0x14;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x40) = uVar13;
  uVar13 = 0x1d;
  if (*(char *)(*(long *)(param_1 + 8) + 0x1140) != '\0') {
    uVar13 = 0x2b;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2c) = uVar13;
  *(uint *)(*(long *)(param_1 + 0x248) + 0x18) =
       *(uint *)(*(long *)(param_1 + 0x248) + 0x18) & 0xfffff7ff |
       (uint)*(byte *)(*(long *)(param_1 + 8) + 0x11a0) << 0xb;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 0xb8) =
       *(undefined4 *)(*(long *)(param_1 + 8) + 0x11c0);
  *(uint *)(*(long *)(param_1 + 0x248) + 0x18) =
       *(uint *)(*(long *)(param_1 + 0x248) + 0x18) & 0xffefffff |
       (uint)*(byte *)(*(long *)(param_1 + 8) + 0x1200) << 0x14;
  FUN_03a39ed0(param_1 + 0x250,*param_2,param_3,param_4);
  local_48c = 0x100000000;
  local_490 = *param_2;
  local_484 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x1360);
  FUN_03a3b6e0(param_1 + 0x4a8,&local_490,param_3);
  if (param_4 != 0) {
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    local_6d = 0;
    local_478 = (long)&local_470 + 4;
    local_470 = CONCAT35(local_470._5_3_,0x400);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040c76ae);
  }
  lVar16 = *(long *)(param_1 + 8);
  if (*(char *)(lVar16 + 0xc70) != '\0') {
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      plVar10 = malloc(0x20);
    }
    else {
      plVar11 = param_3;
      if (param_3 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar16 + 8);
        if (lVar9 != 0) {
          plVar11 = (long *)(lVar9 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        plVar10 = (long *)0x0;
        if (plVar11 == (long *)0x0) goto LAB_03a37450;
      }
      plVar10 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x20,8);
    }
LAB_03a37450:
    puVar1 = PTR_DAT_04bd1990;
    plVar10[2] = 0;
    *(undefined4 *)(plVar10 + 3) = 0;
    *plVar10 = (long)(puVar1 + 0x10);
    plVar10[1] = 0;
    *(long **)(param_1 + 0x14b8) = plVar10;
    FUN_03aed5f0(plVar10,*param_2,param_3,1);
    lVar16 = *(long *)(param_1 + 8);
  }
  if (*(char *)(lVar16 + 0xc10) == '\0') goto LAB_03a377fc;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    pvVar12 = malloc(0x40);
joined_r0x03a3786c:
    if (pvVar12 != (void *)0x0) {
      *(void **)(param_1 + 0x14d0) = pvVar12;
      *(undefined8 *)(param_1 + 0x14c8) = 0x800000000;
    }
  }
  else {
    plVar10 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03a374d0:
      pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x40,8);
      goto joined_r0x03a3786c;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar16 + 8);
    if (lVar9 != 0) {
      plVar10 = (long *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) goto LAB_03a374d0;
  }
  puVar6 = PTR_PTR_04bb2238;
  lVar16 = 0;
  puVar1 = PTR_DAT_04bbda98 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bd17e8 + 0x10;
  do {
    lVar17 = *(long *)(param_1 + 8) + lVar16 * 0x70;
    (**(code **)(*(long *)(lVar17 + 0x1f60) + 0x18))(lVar17 + 0x1f60);
    (**(code **)(*(long *)(lVar17 + 0x1f60) + 0x18))(lVar17 + 0x1f60);
    lVar18 = *(long *)(lVar17 + 0x1f68);
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar9 = *(long *)(puVar6 + 8);
    if (lVar18 != lVar9) {
      uVar15 = 0;
      bVar8 = true;
      lVar17 = *(long *)(lVar17 + 0x1f68) + 2;
      do {
        lVar18 = lVar17 + uVar15;
        cVar5 = *(char *)(lVar18 + -2);
        if (cVar5 != *(char *)(lVar9 + uVar15)) break;
        if (cVar5 == '\0') {
          if (bVar8) goto LAB_03a37550;
          break;
        }
        cVar5 = *(char *)(lVar18 + -1);
        if (cVar5 != *(char *)(lVar9 + uVar15 + 1)) break;
        if (cVar5 == '\0') goto LAB_03a37550;
        cVar5 = *(char *)(lVar17 + uVar15);
        if (cVar5 != *(char *)(lVar9 + uVar15 + 2)) break;
        if (cVar5 == '\0') goto LAB_03a37550;
        bVar8 = uVar15 < 0x7fffe;
        uVar15 = uVar15 + 3;
      } while (uVar15 != 0x80001);
      local_470 = 0;
      local_480 = (undefined *)0x0;
      local_478 = -0xffffffff;
      local_468 = 0x101;
      local_480 = (undefined *)
                  FUN_039ffba0(*(undefined8 *)PTR_DAT_04bd1770,
                               *(long *)(param_1 + 8) + lVar16 * 0x70 + 0x1f60);
      if (local_480 != (undefined *)0x0) {
        local_468 = 0;
        local_478 = CONCAT44(local_478._4_4_,*param_2);
        lVar9 = *(long *)PTR_DAT_04bb2698;
        if (lVar9 == 0) {
          plVar10 = malloc(0x2e8);
        }
        else {
          plVar10 = param_3;
          if (param_3 == (long *)0x0) {
            lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar10 = (long *)(lVar9 + 8);
            if (lVar17 != 0) {
              plVar10 = (long *)(lVar17 + 0xa8);
            }
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) {
              plVar10 = (long *)0x0;
              goto LAB_03a376d0;
            }
          }
          plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2e8,8);
        }
LAB_03a376d0:
        plVar10[4] = 0;
        plVar10[8] = 0;
        plVar10[9] = 0;
        *(undefined1 *)((long)plVar10 + 0xb2) = 0;
        *(undefined8 *)((long)plVar10 + 0xb4) = 0;
        plVar10[5] = 0;
        plVar10[0x10] = (long)puVar1;
        plVar10[0x14] = 0xffff00000000;
        *(undefined4 *)(plVar10 + 0x15) = 0xffff;
        *(undefined2 *)((long)plVar10 + 0xac) = 0x10;
        *(undefined4 *)((long)plVar10 + 0xae) = 0xff010000;
        plVar10[0xe] = 0;
        plVar10[0xf] = 0;
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[0x18] = (long)puVar2;
        plVar10[0x19] = (long)&DAT_040c7886;
        plVar10[6] = 0;
        plVar10[7] = (long)(plVar10 + 5);
        plVar10[10] = 0;
        plVar10[0xb] = 0;
        plVar10[0xc] = 0;
        plVar10[0xd] = 0;
        puVar7 = PTR_DAT_04bd17e0;
        puVar4 = PTR_DAT_04bd17e0 + 0x10;
        *(undefined4 *)((long)plVar10 + 0x164) = 0;
        *(undefined4 *)(plVar10 + 0x1e) = 0;
        *(undefined4 *)(plVar10 + 0x21) = 0;
        *(undefined1 *)(plVar10 + 0x2c) = 0;
        plVar10[0x2d] = 0;
        plVar10[0x35] = 0;
        *plVar10 = (long)puVar4;
        plVar10[1] = 0;
        plVar10[0x1a] = (long)(puVar7 + 0x2f8);
        plVar10[0x1b] = 0;
        plVar10[0x31] = (long)puVar3;
        plVar10[0x1c] = 0;
        plVar10[0x1d] = 0;
        plVar10[0x1f] = 0;
        plVar10[0x20] = 0;
        plVar10[0x22] = 0;
        plVar10[0x23] = 0;
        plVar10[0x24] = 0;
        plVar10[0x25] = 0;
        plVar10[0x26] = 0;
        plVar10[0x27] = 0;
        plVar10[0x28] = 0;
        plVar10[0x29] = 0;
        plVar10[0x2a] = 0;
        plVar10[0x2b] = 0;
        plVar10[0x2f] = 0;
        plVar10[0x30] = 0;
        plVar10[0x36] = 0;
        plVar10[0x37] = 0;
        FUN_003490b4(plVar10 + 0x38);
        plVar10[0x5c] = 0xff00020000;
        *(ushort *)((long)plVar10 + 0xac) = *(ushort *)((long)plVar10 + 0xac) | 6;
        FUN_039d3d40(plVar10,&local_480,param_3);
        *(ushort *)((long)plVar10 + 0xac) = *(ushort *)((long)plVar10 + 0xac) & 0xfffd;
        if (*(int *)(param_1 + 0x14c8) < *(int *)(param_1 + 0x14cc)) {
          *(long **)(*(long *)(param_1 + 0x14d0) + (long)*(int *)(param_1 + 0x14c8) * 8) = plVar10;
          *(int *)(param_1 + 0x14c8) = *(int *)(param_1 + 0x14c8) + 1;
        }
      }
    }
LAB_03a37550:
    lVar16 = lVar16 + 1;
  } while (lVar16 != 8);
LAB_03a377fc:
  if (param_4 != 0) {
    local_6d = 0;
    local_470 = CONCAT35(local_470._5_3_,0x400);
    local_478 = (long)&local_470 + 4;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040f1984);
  }
  return;
}

