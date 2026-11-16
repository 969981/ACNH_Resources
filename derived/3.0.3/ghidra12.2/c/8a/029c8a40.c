
undefined8 FUN_029c8a40(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 local_98 [2];
  long local_90;
  undefined2 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  plVar5 = (long *)(param_1 + 0x24a38);
  iVar9 = *(int *)(param_1 + 0x24a48);
  if (iVar9 < *(int *)(param_1 + 0x24a60)) {
    iVar8 = 0;
    do {
      if (iVar9 < *(int *)(param_1 + 0x24a60)) {
        plVar10 = *(long **)(param_1 + 0x24a50);
        if (plVar10 != (long *)0x0) {
          *(long *)(param_1 + 0x24a50) = *plVar10;
        }
        plVar10[2] = 0;
        plVar11 = plVar10 + 1;
        *plVar11 = 0;
        *plVar10 = param_1 + 0x48 + (long)iVar8 * 3000;
        lVar12 = *plVar5;
        *plVar5 = (long)plVar11;
        plVar10[2] = (long)plVar5;
        *plVar11 = lVar12;
        if (lVar12 != 0) {
          *(long **)(lVar12 + 8) = plVar11;
        }
        iVar9 = *(int *)(param_1 + 0x24a48) + 1;
        *(int *)(param_1 + 0x24a48) = iVar9;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x32);
  }
  lVar12 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(0x46cd8);
joined_r0x029c9138:
    if (puVar7 != (undefined8 *)0x0) {
      iVar9 = 0x32;
      *puVar7 = 0x32;
      puVar13 = puVar7 + 1;
      *(undefined1 *)puVar13 = 0;
      FUN_02a063c0(puVar7 + 2);
      *(undefined1 *)(puVar7 + 0x2d6) = 0;
      FUN_02a063c0(puVar7 + 0x2d7);
      *(undefined1 *)(puVar7 + 0x5ab) = 0;
      FUN_02a063c0(puVar7 + 0x5ac);
      *(undefined1 *)(puVar7 + 0x880) = 0;
      FUN_02a063c0(puVar7 + 0x881);
      *(undefined1 *)(puVar7 + 0xb55) = 0;
      FUN_02a063c0(puVar7 + 0xb56);
      *(undefined1 *)(puVar7 + 0xe2a) = 0;
      FUN_02a063c0(puVar7 + 0xe2b);
      *(undefined1 *)(puVar7 + 0x10ff) = 0;
      FUN_02a063c0(puVar7 + 0x1100);
      *(undefined1 *)(puVar7 + 0x13d4) = 0;
      FUN_02a063c0(puVar7 + 0x13d5);
      *(undefined1 *)(puVar7 + 0x16a9) = 0;
      FUN_02a063c0(puVar7 + 0x16aa);
      *(undefined1 *)(puVar7 + 0x197e) = 0;
      FUN_02a063c0(puVar7 + 0x197f);
      *(undefined1 *)(puVar7 + 0x1c53) = 0;
      FUN_02a063c0(puVar7 + 0x1c54);
      *(undefined1 *)(puVar7 + 0x1f28) = 0;
      FUN_02a063c0(puVar7 + 0x1f29);
      *(undefined1 *)(puVar7 + 0x21fd) = 0;
      FUN_02a063c0(puVar7 + 0x21fe);
      *(undefined1 *)(puVar7 + 0x24d2) = 0;
      FUN_02a063c0(puVar7 + 0x24d3);
      *(undefined1 *)(puVar7 + 0x27a7) = 0;
      FUN_02a063c0(puVar7 + 0x27a8);
      *(undefined1 *)(puVar7 + 0x2a7c) = 0;
      FUN_02a063c0(puVar7 + 0x2a7d);
      *(undefined1 *)(puVar7 + 0x2d51) = 0;
      FUN_02a063c0(puVar7 + 0x2d52);
      *(undefined1 *)(puVar7 + 0x3026) = 0;
      FUN_02a063c0(puVar7 + 0x3027);
      *(undefined1 *)(puVar7 + 0x32fb) = 0;
      FUN_02a063c0(puVar7 + 0x32fc);
      *(undefined1 *)(puVar7 + 0x35d0) = 0;
      FUN_02a063c0(puVar7 + 0x35d1);
      *(undefined1 *)(puVar7 + 0x38a5) = 0;
      FUN_02a063c0(puVar7 + 0x38a6);
      *(undefined1 *)(puVar7 + 0x3b7a) = 0;
      FUN_02a063c0(puVar7 + 0x3b7b);
      *(undefined1 *)(puVar7 + 0x3e4f) = 0;
      FUN_02a063c0(puVar7 + 0x3e50);
      *(undefined1 *)(puVar7 + 0x4124) = 0;
      FUN_02a063c0(puVar7 + 0x4125);
      *(undefined1 *)(puVar7 + 0x43f9) = 0;
      FUN_02a063c0(puVar7 + 0x43fa);
      *(undefined1 *)(puVar7 + 0x46ce) = 0;
      FUN_02a063c0(puVar7 + 0x46cf);
      *(undefined1 *)(puVar7 + 0x49a3) = 0;
      FUN_02a063c0(puVar7 + 0x49a4);
      *(undefined1 *)(puVar7 + 0x4c78) = 0;
      FUN_02a063c0(puVar7 + 0x4c79);
      *(undefined1 *)(puVar7 + 0x4f4d) = 0;
      FUN_02a063c0(puVar7 + 0x4f4e);
      *(undefined1 *)(puVar7 + 0x5222) = 0;
      FUN_02a063c0(puVar7 + 0x5223);
      *(undefined1 *)(puVar7 + 0x54f7) = 0;
      FUN_02a063c0(puVar7 + 0x54f8);
      *(undefined1 *)(puVar7 + 0x57cc) = 0;
      FUN_02a063c0(puVar7 + 0x57cd);
      *(undefined1 *)(puVar7 + 0x5aa1) = 0;
      FUN_02a063c0(puVar7 + 0x5aa2);
      *(undefined1 *)(puVar7 + 0x5d76) = 0;
      FUN_02a063c0(puVar7 + 0x5d77);
      *(undefined1 *)(puVar7 + 0x604b) = 0;
      FUN_02a063c0(puVar7 + 0x604c);
      *(undefined1 *)(puVar7 + 0x6320) = 0;
      FUN_02a063c0(puVar7 + 0x6321);
      *(undefined1 *)(puVar7 + 0x65f5) = 0;
      FUN_02a063c0(puVar7 + 0x65f6);
      *(undefined1 *)(puVar7 + 0x68ca) = 0;
      FUN_02a063c0(puVar7 + 0x68cb);
      *(undefined1 *)(puVar7 + 0x6b9f) = 0;
      FUN_02a063c0(puVar7 + 0x6ba0);
      *(undefined1 *)(puVar7 + 0x6e74) = 0;
      FUN_02a063c0(puVar7 + 0x6e75);
      *(undefined1 *)(puVar7 + 0x7149) = 0;
      FUN_02a063c0(puVar7 + 0x714a);
      *(undefined1 *)(puVar7 + 0x741e) = 0;
      FUN_02a063c0(puVar7 + 0x741f);
      *(undefined1 *)(puVar7 + 0x76f3) = 0;
      FUN_02a063c0(puVar7 + 0x76f4);
      *(undefined1 *)(puVar7 + 0x79c8) = 0;
      FUN_02a063c0(puVar7 + 0x79c9);
      *(undefined1 *)(puVar7 + 0x7c9d) = 0;
      FUN_02a063c0(puVar7 + 0x7c9e);
      *(undefined1 *)(puVar7 + 0x7f72) = 0;
      FUN_02a063c0(puVar7 + 0x7f73);
      *(undefined1 *)(puVar7 + 0x8247) = 0;
      FUN_02a063c0(puVar7 + 0x8248);
      *(undefined1 *)(puVar7 + 0x851c) = 0;
      FUN_02a063c0(puVar7 + 0x851d);
      *(undefined1 *)(puVar7 + 0x87f1) = 0;
      FUN_02a063c0(puVar7 + 0x87f2);
      *(undefined1 *)(puVar7 + 0x8ac6) = 0;
      FUN_02a063c0(puVar7 + 0x8ac7);
      *(undefined4 *)(param_1 + 0x25bb8) = 0x32;
      *(undefined8 **)(param_1 + 0x25bc0) = puVar13;
      goto LAB_029c914c;
    }
  }
  else {
    plVar5 = (long *)*param_2;
    if (plVar5 != (long *)0x0) {
LAB_029c8b3c:
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x46cd8,8);
      goto joined_r0x029c9138;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_029c8b3c;
  }
  iVar9 = *(int *)(param_1 + 0x25bb8);
  if (iVar9 == 0) {
    return 1;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x25bc0);
LAB_029c914c:
  iVar8 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    local_88 = 0x100;
    local_84 = 0xbf800000;
    local_90 = *param_2;
    local_98[0] = 0x80;
    puStack_78 = &DAT_0407ebb1;
    local_70 = 0;
    local_80 = puVar1;
    FUN_02a066f0(puVar13 + (long)iVar8 * 0x2d5 + 1,local_98);
    iVar3 = *(int *)(param_1 + 0x25bd8);
    iVar4 = *(int *)(param_1 + 0x25bd0);
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x25bd8) = iVar3 + 1;
      iVar3 = *(int *)(param_1 + 0x25bd4) + iVar3;
      iVar2 = 0;
      if (iVar4 <= iVar3) {
        iVar2 = iVar4;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x25bc8) + (long)(iVar3 - iVar2) * 8) =
           puVar13 + (long)iVar8 * 0x2d5;
    }
    iVar8 = iVar8 + 1;
  } while (iVar9 != iVar8);
  return 1;
}

