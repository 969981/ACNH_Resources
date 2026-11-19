
void FUN_03a4f220(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 long *param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined8 local_480;
  undefined *local_478;
  undefined1 *puStack_470;
  undefined4 local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar4 = malloc(0xdd0);
  }
  else {
    plVar3 = param_5;
    if (param_5 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0xdd0,8);
  }
  FUN_03aef6e0(pvVar4,param_2);
  *(void **)(param_1 + 0x3d8) = pvVar4;
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    puVar5 = malloc(0x118);
  }
  else {
    plVar3 = param_5;
    if (param_5 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x118,8);
  }
  *(undefined4 *)(puVar5 + 0x21) = 0;
  puVar5[0x22] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar1 = PTR_DAT_04bbd8f8;
  puVar5[2] = 0;
  puVar5[3] = 0;
  lVar7 = *(long *)puVar1;
  *(undefined8 **)(param_1 + 0x3e0) = puVar5;
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(*(long *)PTR_DAT_04bb31c8 + 0xc0);
    *puVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bb31c8 + 0x40);
    puVar5[1] = uVar6;
    FUN_03b05b60(puVar5,*(undefined8 *)(*(long *)puVar1 + 0x18));
  }
  *(char *)(param_1 + 8) = (char)param_2;
  uStack_484 = 0x1c;
  local_488 = param_3;
  local_480 = param_4;
  FUN_039eba40(param_1,&local_488,param_5);
  *(byte *)(param_1 + 0x3c8) = *(byte *)(param_1 + 0x3c8) & 0xf8 | 2;
  lVar7 = *(long *)(param_1 + 0x3d0);
  if (lVar7 != 0) {
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined1 *)(param_1 + 0x3ca) = 0xff;
    *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(lVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(lVar7 + 0x5c);
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(lVar7 + 0x60);
    *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(lVar7 + 100);
    uVar6 = *(undefined8 *)(lVar7 + 0x68);
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(lVar7 + 0x70);
    *(undefined8 *)(param_1 + 0x420) = uVar6;
    FUN_039ee490(param_1,0xffffffff);
    *(long *)(param_1 + 800) = param_1 + 0x408;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  lVar7 = 0x1450;
  if (*(uint *)(param_1 + 0x10) < 6) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x1860;
  if (*(uint *)(param_1 + 0x10) < 7) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x1c70;
  if (*(uint *)(param_1 + 0x10) < 8) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x2080;
  if (*(uint *)(param_1 + 0x10) < 9) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x2490;
  if (*(uint *)(param_1 + 0x10) < 10) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x28a0;
  if (*(uint *)(param_1 + 0x10) < 0xb) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x2cb0;
  if (*(uint *)(param_1 + 0x10) < 0xc) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x30c0;
  if (*(uint *)(param_1 + 0x10) < 0xd) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x34d0;
  if (*(uint *)(param_1 + 0x10) < 0xe) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x38e0;
  if (*(uint *)(param_1 + 0x10) < 0xf) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x3cf0;
  if (*(uint *)(param_1 + 0x10) < 0x10) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x4100;
  if (*(uint *)(param_1 + 0x10) < 0x11) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x4510;
  if (*(uint *)(param_1 + 0x10) < 0x12) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x4920;
  if (*(uint *)(param_1 + 0x10) < 0x13) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x4d30;
  if (*(uint *)(param_1 + 0x10) < 0x14) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x5140;
  if (*(uint *)(param_1 + 0x10) < 0x15) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x5550;
  if (*(uint *)(param_1 + 0x10) < 0x16) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  lVar7 = 0x5960;
  if (*(uint *)(param_1 + 0x10) < 0x17) {
    lVar7 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x18) + lVar7 + 0x408) = 1;
  if (param_6 != 0) {
    FUN_006e9454(&local_478,&DAT_0405f272,param_2);
    local_65 = 0;
    puStack_470 = local_464;
    local_468 = 0x400;
    local_464[0] = 0;
    local_478 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_478,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_0409e447);
  }
  return;
}

