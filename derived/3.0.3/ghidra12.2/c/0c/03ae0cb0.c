
undefined8 FUN_03ae0cb0(long param_1,long *param_2,uint *param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  uint uVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long local_ca8;
  undefined8 local_ca0;
  long local_890;
  undefined8 local_888;
  undefined8 local_478;
  undefined1 *local_470;
  undefined4 local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  
  *(long **)(param_1 + 8) = param_2;
  if (((*PTR_DAT_04bb3490 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar14 != 0)) {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if (param_2 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    uVar15 = (**(code **)*param_2)(param_2,PTR_DAT_04bb3488);
    plVar23 = param_2;
    if ((uVar15 & 1) == 0) {
      plVar23 = (long *)0x0;
    }
  }
  uVar13 = *param_3;
  if (0 < (int)uVar13) {
    if ((char)param_3[1] != '\0') {
      plVar17 = param_4;
      if (param_4 == (long *)0x0) {
        lVar25 = *(long *)PTR_DAT_04bb2698;
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar25 + 8);
        if (lVar16 != 0) {
          plVar17 = (long *)(lVar16 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
      }
      lVar16 = (**(code **)(*plVar17 + 0x30))(plVar17,(ulong)uVar13 * 0x140,8);
      if (lVar16 == 0) {
        return 0;
      }
      *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 0x10;
      uVar13 = *param_3;
      *(uint *)(param_1 + 0x18) = uVar13;
      *(long *)(param_1 + 0x10) = lVar16 + (long)(int)uVar13 * 0x138;
      uVar13 = *param_3;
      if ((int)uVar13 < 1) {
        uVar15 = 0;
      }
      else {
        lVar25 = 0;
        uVar15 = lVar16 + 7U & 0xfffffffffffffff8;
        lVar16 = *(long *)(PTR_DAT_04bb2f80 + 0x10);
        lVar7 = *(long *)(PTR_DAT_04bb2f80 + 0x18);
        puVar1 = PTR_DAT_04bd17b0 + 0x10;
        lVar5 = *(long *)(PTR_DAT_04bb2f80 + 0x20);
        lVar8 = *(long *)(PTR_DAT_04bb2f80 + 0x28);
        puVar2 = PTR_DAT_04bd14b8 + 0x10;
        lVar6 = *(long *)PTR_DAT_04bb2f80;
        lVar9 = *(long *)(PTR_DAT_04bb2f80 + 8);
        puVar3 = PTR_DAT_04bd14a0 + 0x10;
        uVar12 = *(undefined4 *)(PTR_DAT_04bb2f78 + 8);
        puVar4 = PTR_DAT_04bd17b8 + 0x10;
        lVar20 = *(long *)PTR_DAT_04bb2f78;
        do {
          plVar17 = (long *)(uVar15 + lVar25);
          lVar25 = lVar25 + 0x138;
          *(undefined1 *)(plVar17 + 5) = 0;
          *(undefined2 *)((long)plVar17 + 0x2a) = 0;
          *plVar17 = (long)puVar1;
          plVar17[1] = 0;
          *(undefined2 *)((long)plVar17 + 0x8a) = 0;
          plVar17[0x10] = 0;
          *(undefined1 *)(plVar17 + 0x11) = 0;
          plVar17[4] = (long)puVar3;
          *(undefined4 *)(plVar17 + 0x23) = uVar12;
          plVar17[0x22] = lVar20;
          *(undefined8 *)((long)plVar17 + 0x11c) = 0x30000ffff0000;
          plVar17[0x25] = (long)puVar4;
          *(undefined2 *)(plVar17 + 0x26) = 0;
          plVar17[2] = 0;
          plVar17[3] = 0;
          plVar17[0xe] = 0;
          plVar17[0xf] = 0;
          plVar17[0xc] = (long)puVar2;
          plVar17[0xd] = 0;
          plVar17[0x12] = 0;
          plVar17[0x13] = 0;
          plVar17[0x14] = 0;
          plVar17[0x15] = 0;
          plVar17[0x18] = lVar16;
          plVar17[0x19] = lVar7;
          plVar17[0x1a] = lVar5;
          plVar17[0x1b] = lVar8;
          plVar17[0x16] = lVar6;
          plVar17[0x17] = lVar9;
          plVar17[0x1e] = lVar16;
          plVar17[0x1f] = lVar7;
          plVar17[0x20] = lVar5;
          plVar17[0x21] = lVar8;
          plVar17[0x1c] = lVar6;
          plVar17[0x1d] = lVar9;
        } while ((ulong)uVar13 * 0x138 != lVar25);
      }
      uVar13 = 1;
      *(ulong *)(param_1 + 0x20) = uVar15;
      local_478 = (undefined *)0x100000001;
      local_470._0_1_ = 1;
      uVar12 = (**(code **)(**(long **)(param_1 + 8) + 0x218))();
      if (plVar23 == (long *)0x0) {
        bVar10 = false;
      }
      else {
        bVar10 = plVar23[0x30] != 0;
        uVar13 = (uint)*(byte *)((long)plVar23 + 0x2e2);
      }
      local_478 = (undefined *)CONCAT44(uVar13,uVar12);
      local_470 = (undefined1 *)CONCAT71(local_470._1_7_,bVar10);
      FUN_039bdc70(*(undefined8 *)(param_1 + 0x20),*param_3,&local_478,param_4);
      uVar13 = *param_3;
      if (0 < (int)uVar13) {
        lVar25 = 0;
        lVar16 = 0;
        do {
          lVar16 = lVar16 + 1;
          lVar5 = *(long *)(param_1 + 0x20) + lVar25;
          iVar14 = *(int *)(param_1 + 0x1c);
          lVar25 = lVar25 + 0x138;
          *(int *)(param_1 + 0x1c) = iVar14 + 1;
          *(long *)(*(long *)(param_1 + 0x10) + (long)iVar14 * 8) = lVar5;
          uVar13 = *param_3;
        } while (lVar16 < (int)uVar13);
      }
    }
    plVar23 = *(long **)(param_1 + 8);
    *(uint *)(param_1 + 0x1c) = uVar13;
    sVar11 = (**(code **)(*plVar23 + 0x1e0))(plVar23);
    *(short *)((long)plVar23 + 0xb4) = sVar11 + (short)uVar13;
  }
  uVar13 = (**(code **)(*param_2 + 0x218))(param_2);
  if (0 < (int)uVar13) {
    uVar24 = (ulong)uVar13;
    uVar15 = (uVar24 + (ulong)uVar13 * 8) * 0x10 | 8;
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      puVar18 = malloc(uVar15);
    }
    else {
      plVar23 = param_4;
      if (param_4 == (long *)0x0) {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar23 = (long *)(lVar16 + 8);
        if (lVar25 != 0) {
          plVar23 = (long *)(lVar25 + 0xa8);
        }
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) goto LAB_03ae106c;
      }
      puVar18 = (ulong *)(**(code **)(*plVar23 + 0x30))(plVar23,uVar15,8);
    }
    if (puVar18 != (ulong *)0x0) {
      puVar21 = puVar18 + 1;
      puVar19 = puVar18 + 9;
      *puVar18 = uVar24;
      lVar16 = uVar24 * 0x90;
      puVar1 = PTR_DAT_04bd11b8 + 0x10;
      do {
        puVar19[-7] = (ulong)puVar1;
        puVar19[-6] = 0;
        lVar16 = lVar16 + -0x90;
        puVar19[-1] = 0;
        *(undefined4 *)puVar19 = 0x10001;
        *(undefined1 *)((long)puVar19 + 4) = 0;
        puVar19[7] = 0;
        *(undefined4 *)(puVar19 + 8) = 0;
        puVar19[9] = 0;
        puVar19[-5] = 0;
        puVar19[-4] = 0;
        puVar19[-3] = 0;
        puVar19[-2] = 0;
        puVar19 = puVar19 + 0x12;
      } while (lVar16 != 0);
      *(uint *)(param_1 + 0x28) = uVar13;
      *(ulong **)(param_1 + 0x30) = puVar21;
      goto joined_r0x03ae1074;
    }
  }
LAB_03ae106c:
  uVar13 = *(uint *)(param_1 + 0x28);
  puVar21 = *(ulong **)(param_1 + 0x30);
joined_r0x03ae1074:
  if (uVar13 != 0) {
    uVar22 = 0;
    do {
      puVar21[(long)(int)uVar22 * 0x12] = 0;
      uVar22 = uVar22 + 1;
    } while (uVar13 != uVar22);
  }
  if ((((*(char *)((long)param_3 + 5) != '\0') && (*(long *)(param_1 + 8) != 0)) &&
      (lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x180), lVar16 != 0)) &&
     ((*(long *)(lVar16 + 0x10) != 0 && (0 < *(int *)(param_1 + 0x1c))))) {
    lVar16 = 0;
    do {
      FUN_039bf520(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + lVar16 * 8) + 0xa8),param_4
                  );
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x1c));
  }
  plVar23 = *(long **)(*(long *)PTR_DAT_04bbdcb8 + 0x48);
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x50))(plVar23,*(undefined8 *)(param_1 + 8),param_1,param_4);
  }
  if (param_5 != 0) {
    FUN_006e9454(&local_ca8,"%s_%s","detail","setting");
    local_65 = 0;
    local_470 = local_464;
    local_468 = 0x400;
    local_464[0] = 0;
    local_478 = PTR_DAT_04bb2f40 + 0x10;
    (**(code **)(local_ca8 + 0x18))(&local_ca8);
    FUN_006e9454(&local_890,"%s\\%s","detail",local_ca0);
    (**(code **)(local_890 + 0x18))(&local_890);
    FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_888);
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xf7;
  iVar14 = (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  if (0 < iVar14) {
    lVar16 = 0;
    lVar25 = 10;
    do {
      if ((*(byte *)((*(long **)(param_1 + 8))[10] + lVar25) & 7) - 2 < 3) {
        *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 8;
        return 1;
      }
      lVar16 = lVar16 + 1;
      iVar14 = (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      lVar25 = lVar25 + 0xc;
    } while (lVar16 < iVar14);
  }
  return 1;
}

