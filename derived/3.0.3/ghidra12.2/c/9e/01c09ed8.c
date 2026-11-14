
void FUN_01c09ed8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_328;
  undefined1 *local_320;
  undefined4 local_318;
  undefined1 local_314 [63];
  undefined1 local_2d5;
  undefined **local_2d0;
  undefined4 local_2c8;
  undefined *local_2c0;
  char *pcStack_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac;
  undefined4 local_2ab;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined4 local_28c;
  long lStack_288;
  undefined4 uStack_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined4 local_26c;
  undefined *local_268;
  undefined *puStack_260;
  undefined1 auStack_258 [536];
  
  local_2ac = 0;
  local_2b0 = 0x1010100;
  local_2ab = 0x1010001;
  uStack_280 = 0;
  local_28c = 0;
  local_2a4 = 0;
  local_2c0 = PTR_DAT_04bb2020 + 0x10;
  local_29c = 0;
  local_294 = 0;
  local_27c = 0;
  local_274 = 0;
  local_2d0 = &PTR_LAB_04ba8a48;
  local_26c = 0;
  puStack_260 = PTR_DAT_04bb2120;
  pcStack_2b8 = "MsgVoiceBdli";
  local_318 = 0x40;
  local_2d5 = 0;
  local_314[0] = 0;
  lStack_288 = *(long *)PTR_DAT_04bb28f8 + 0x2880;
  local_2c8 = 2;
  local_320 = local_314;
  local_328 = PTR_DAT_04bb2bc0 + 0x10;
  local_268 = local_2c0;
  uVar1 = FUN_01be5d00(*(long *)PTR_DAT_04bb28f8,param_1 + 0x14);
  if (((int)uVar1 < 0xc) && (lVar5 = *(long *)(PTR_PTR_04bc0bc8 + (ulong)uVar1 * 0x10), lVar5 != 0))
  {
    uVar1 = FUN_038cefc4();
    if (uVar1 < 0x10) {
      puVar6 = (undefined8 *)(&PTR_DAT_04912310)[uVar1];
    }
    else {
      puVar6 = &DAT_0407ebb1;
    }
    (**(code **)(*(long *)(param_1 + 0x14) + 0x18))(param_1 + 0x14);
    FUN_038d1270(&local_328,"BDLI/%s/%s/%s.bdli",lVar5,puVar6,*(undefined8 *)(param_1 + 0x16));
    if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
      param_1[5] = 0;
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf0 | 2;
      iVar2 = FUN_03f33f70(*(undefined8 *)PTR_DAT_04bb49b8,param_1 + 2,&local_328,&local_2d0);
      uVar3 = 2;
      if (iVar2 != 4) {
        uVar3 = 4;
      }
      goto LAB_01c0a0d0;
    }
    lVar5 = *(long *)(param_1 + 6);
    if (lVar5 == 0) {
      puVar4 = &DAT_0406a300;
    }
    else {
      (**(code **)(*(long *)(lVar5 + 0x360) + 0x18))(lVar5 + 0x360);
      puVar4 = *(undefined **)(lVar5 + 0x368);
    }
    (**(code **)(local_328 + 0x18))(&local_328);
    FUN_0156b428(auStack_258,&DAT_0406f6e3,puVar4,local_320);
    param_1[5] = 8;
  }
  uVar3 = 4;
LAB_01c0a0d0:
  *param_1 = uVar3;
  return;
}

