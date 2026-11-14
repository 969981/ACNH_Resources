
undefined8 FUN_0157f904(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar6 = PTR_DAT_04bb59e0;
  if ((*(char *)(param_1 + 0x40) == '\0' && *(char *)(param_1 + 0x70) == '\0') &&
      *(char *)(param_1 + 0x80) == '\0') {
    uVar9 = 0;
    if ((((*(char *)(param_1 + 0xc80) == '\0') && (*(char *)(param_1 + 0x90) == '\0')) &&
        (*(char *)(param_1 + 0xa0) == '\0')) &&
       ((*(char *)(param_1 + 0xb0) == '\0' && (*(char *)(param_1 + 0xc0) == '\0')))) {
      lVar10 = *(long *)(param_1 + 0xe8);
      uVar3 = *(undefined4 *)(param_1 + 400);
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x60) = 0;
      uVar5 = *puVar6;
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined4 *)(param_1 + 0xd8) = 1;
      uVar4 = *(undefined4 *)(param_1 + 0x194);
      *(undefined1 *)(param_1 + 0xc68) = uVar5;
      uVar1 = *(undefined8 *)(param_1 + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x1a0);
      FUN_0390a734(param_1 + 400,1,0x1d,*(undefined4 *)(param_1 + 0xc60),
                   *(undefined4 *)(param_1 + 0xc64),1,1,1,0,1);
      *(undefined4 *)(param_1 + 400) = uVar3;
      *(char **)(param_1 + 0x220) = "GameCaptureUploadBuffer";
      bVar8 = false;
      *(undefined4 *)(param_1 + 0x194) = uVar4;
      *(undefined8 *)(param_1 + 0x198) = uVar1;
      *(undefined8 *)(param_1 + 0x1a0) = uVar2;
      if ((*(byte *)(param_1 + 0x1de) >> 1 & 1) != 0) {
        bVar8 = 0x11 < *(ushort *)(param_1 + 0x228) &&
                *(ushort *)(param_1 + 0x228) - 0x59 < 0xffffffd6;
      }
      uVar9 = 1;
      local_58 = uVar3;
      uStack_54 = uVar4;
      local_50 = uVar1;
      uStack_48 = uVar2;
      FUN_038fd3e0(param_1 + 0x1e0,&local_58,param_1 + 0x1c0,0,"GameCaptureUploadBuffer",bVar8,1);
      puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 400) + 0xf0))(lVar10 + 400);
      *(undefined4 *)(param_1 + 0xc50) = *puVar7;
      *(undefined8 *)(param_1 + 0xc58) = 0xffffffff;
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

