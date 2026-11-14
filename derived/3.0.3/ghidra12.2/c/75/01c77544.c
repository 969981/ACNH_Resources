
/* WARNING: Removing unreachable block (ram,0x01c77a78) */

void FUN_01c77544(long *param_1)

{
  long *__s;
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  int local_e8;
  undefined4 uStack_e4;
  long local_e0;
  long *plStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  long *plStack_b8;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  char *local_68;
  
  puVar3 = PTR_DAT_04bdf1d8;
  if ((char)param_1[0x83] != '\0') {
    if (*(char *)((long)param_1 + 0x411) == '\0') {
      return;
    }
    if ((char)param_1[0x82] != '\0') {
      if ((char)param_1[0x4f] != '\0') {
        return;
      }
      param_1[0x4a] = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      param_1[0x4e] = 0;
      param_1[0x46] = (long)param_1;
      *(undefined1 *)(param_1 + 0x4f) = 1;
      param_1[0x47] = (long)&LAB_01c78310;
      param_1[0x48] = 0;
      param_1[0x4b] = (long)(puVar3 + 0x10);
      param_1[0x45] = (long)&PTR_LAB_04a43340;
      if ((char)param_1[0x7e] == '\0') {
        memset(param_1 + 0x51,0,0x168);
        *(undefined4 *)(param_1 + 0x7a) = 3;
      }
      puVar3 = PTR_DAT_04bb48d0;
      param_1[0x49] = (long)(param_1 + 0x51);
      local_d0 = 1;
      lVar12 = *(long *)puVar3;
      param_1[0x4a] = *(long *)(*(long *)PTR_DAT_04bb47c8 + 8);
      lVar7 = *(long *)(lVar12 + 0x20);
      if (lVar7 != 0) {
        local_a8 = 1;
        local_b0 = PTR_DAT_04bb5070 + 0x10;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        plStack_b8 = param_1 + 0x4b;
        local_a0 = 0;
        local_c8 = 0;
        local_a6 = 1;
        plStack_90 = param_1 + 0x45;
        local_98 = *(undefined8 *)(lVar12 + 8);
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_68 = "Game::UI::AsyncWorker";
        local_c0 = &local_b0;
        FUN_03f45184(lVar7,&local_c8);
        if ((char)param_1[0x83] == '\0') {
          return;
        }
      }
      if (*(char *)((long)param_1 + 0x411) != '\0') {
        *(undefined1 *)((long)param_1 + 0x411) = 0;
      }
      *(undefined1 *)(param_1 + 0x83) = 0;
      return;
    }
    if ((char)param_1[0x7e] == '\0') {
LAB_01c77724:
      *(undefined1 *)((long)param_1 + 0x411) = 0;
    }
    else {
LAB_01c7770c:
      FUN_01c79754(param_1 + 0x51);
      *(undefined1 *)(param_1 + 0x7e) = 0;
      if ((char)param_1[0x83] == '\0') goto LAB_01c7772c;
      if (*(char *)((long)param_1 + 0x411) != '\0') goto LAB_01c77724;
    }
    *(undefined1 *)(param_1 + 0x83) = 0;
LAB_01c7772c:
    if (*(char *)((long)param_1 + 0x421) == '\0') {
      *(undefined1 *)((long)param_1 + 0x421) = 1;
    }
    *(undefined1 *)(param_1 + 0x84) = 0;
    return;
  }
  cVar2 = (char)param_1[0x7e];
  __s = param_1 + 0x51;
  if (cVar2 != '\0') {
    if (*(char *)((long)param_1 + 0x3e9) == '\0') {
      return;
    }
    if ((char)param_1[0x7d] == '\0') goto LAB_01c7770c;
    if (*(char *)((long)param_1 + 0x421) == '\0') {
      *(undefined2 *)(param_1 + 0x84) = 0x101;
    }
  }
  if ((char)param_1[0x50] == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  if ((*param_1 == 0) || (*(char *)(*param_1 + 0x798) != '\0')) {
    if (cVar2 == '\0') goto LAB_01c7772c;
    goto LAB_01c7770c;
  }
  if (cVar2 == '\0') {
    memset(__s,0,0x168);
    *(undefined4 *)(param_1 + 0x7a) = 3;
    *(undefined1 *)(param_1 + 0x7e) = 1;
    *(undefined4 *)((long)param_1 + 0x28c) = 3;
LAB_01c777c0:
    lVar7 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb47c8 + 8) + 0x30))
                      (*(long **)(*(long *)PTR_DAT_04bb47c8 + 8),0x19000,8);
    param_1[0x52] = lVar7;
    if (lVar7 == 0) goto LAB_01c77954;
  }
  else {
    FUN_01c781b8(__s);
    if ((char)param_1[0x7e] == '\0') {
      memset(__s,0,0x168);
      *(undefined4 *)(param_1 + 0x7a) = 3;
      goto LAB_01c777c0;
    }
    if (param_1[0x52] == 0) goto LAB_01c777c0;
  }
  iVar6 = FUN_0390c400(1,0x1d,0x140,0x140,1,1,2);
  puVar3 = PTR_DAT_04bb2720;
  if ((*(long *)PTR_DAT_04bb2720 == 0) ||
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar7 == 0)) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = *(long **)(lVar7 + 0xd0);
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar8 = malloc(0x38);
  }
  else {
    plVar8 = plVar13;
    if (plVar13 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar7 + 8);
      if (lVar12 != 0) {
        plVar8 = (long *)(lVar12 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_01c778a0;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
  }
LAB_01c778a0:
  puVar4 = PTR_DAT_04bb2cc8;
  plVar8[1] = 0;
  plVar8[6] = 0;
  *(undefined2 *)((long)plVar8 + 0x2a) = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(undefined1 *)(plVar8 + 5) = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  if ((iVar6 != 0) &&
     (uVar9 = FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar8,plVar13,iVar6,0x2000,8),
     (uVar9 & 1) != 0)) {
    *(undefined2 *)((long)plVar8 + 0x2a) = 8;
    lVar7 = plVar8[3];
    if (plVar8[4] == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = (int)plVar8[1] - *(int *)(plVar8[4] + 0x10);
    }
    if (lVar7 != 0) {
      uVar1 = *(undefined4 *)(lVar7 + 0x104);
      lVar12 = *(long *)puVar3;
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x330), lVar12 == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar12 + 0xd0);
      }
      puVar10 = (undefined8 *)FUN_038aa4a0(0xa0,uVar11,8);
      *(undefined4 *)(puVar10 + 10) = 0xffffffff;
      puVar10[0x11] = 0;
      puVar10[0x12] = "agl::TextureData";
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined4 *)(puVar10 + 0x13) = 0x10000;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      puVar10[0x10] = 0;
      FUN_01c78284(param_1 + 0x7b,puVar10);
      lVar12 = *(long *)puVar3;
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x330), lVar12 == 0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar12 + 0xd0);
      }
      local_e8 = iVar14;
      uStack_e4 = uVar1;
      local_e0 = lVar7;
      plStack_d8 = plVar8;
      FUN_0390c314(param_1[0x7b],&local_e8,iVar6,0x1d,0x140,0x140,uVar11);
      param_1[0x81] = 0;
      param_1[0x82] = 0;
      *(undefined1 *)(param_1 + 0x83) = 1;
      param_1[0x7f] = 0;
      param_1[0x80] = 0;
      lVar7 = 0;
      if (*(char *)(*param_1 + 0x790) != '\0') {
        lVar7 = *param_1 + 0x6f0;
      }
      param_1[0x7f] = lVar7;
      param_1[0x80] = param_1[0x7b];
      bVar5 = FUN_035a3380();
      puVar3 = PTR_DAT_04bb2200;
      *(byte *)(param_1 + 0x81) = bVar5 & 1;
      lVar7 = 0;
      if (*(long *)(*(long *)puVar3 + 0x50) != 0) {
        local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
        lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0x50) + 0xb0);
      }
      if (*(long *)(lVar7 + 0x290) == 0) {
        *(long **)(lVar7 + 0x290) = param_1 + 0x7f;
        *(undefined4 *)((long)param_1 + 0x40c) = 1;
        if (*(char *)(*(long *)(lVar7 + 0x290) + 0x19) != '\0') {
          *(undefined1 *)(*(long *)(lVar7 + 0x290) + 0x19) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x50) = 1;
        if ((char)param_1[0x7e] != '\0') {
          FUN_01c79754(__s);
          *(undefined1 *)(param_1 + 0x7e) = 0;
        }
        if ((char)param_1[0x83] != '\0') {
          if (*(char *)((long)param_1 + 0x411) != '\0') {
            *(undefined1 *)((long)param_1 + 0x411) = 0;
          }
          *(undefined1 *)(param_1 + 0x83) = 0;
        }
      }
      if (*(char *)((long)param_1 + 0x421) != '\0') {
        *(undefined1 *)((long)param_1 + 0x421) = 0;
      }
      return;
    }
  }
  (**(code **)(*plVar8 + 8))(plVar8);
LAB_01c77954:
  FUN_01c78698(param_1);
  return;
}

