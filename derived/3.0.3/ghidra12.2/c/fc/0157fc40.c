
undefined8 FUN_0157fc40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  float *pfVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(char *)(param_1 + 0x40) == '\0' && *(char *)(param_1 + 0x70) == '\0') &&
      *(char *)(param_1 + 0x80) == '\0') {
    uVar8 = 0;
    if ((((*(char *)(param_1 + 0xc80) == '\0') && (*(char *)(param_1 + 0x90) == '\0')) &&
        (*(char *)(param_1 + 0xa0) == '\0')) &&
       ((*(char *)(param_1 + 0xb0) == '\0' && (*(char *)(param_1 + 0xc0) == '\0')))) {
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined1 *)(param_1 + 200) = 0;
      puVar5 = PTR_DAT_04bb59e0;
      *(undefined4 *)(param_1 + 0xd8) = 2;
      *(undefined *)(param_1 + 0xc68) = *puVar5;
      puVar5 = PTR_DAT_04bb2200;
      **(undefined1 **)(param_1 + 0xca8) = 0;
      FUN_015812cc(*(undefined8 *)(*(long *)puVar5 + 0x130));
      lVar9 = *(long *)(param_1 + 0xe8);
      uVar3 = *(undefined4 *)(param_1 + 400);
      uVar4 = *(undefined4 *)(param_1 + 0x194);
      uVar1 = *(undefined8 *)(param_1 + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x1a0);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar9 + 0x158) + 0xf0))(lVar9 + 0x158);
      fVar10 = *pfVar6;
      lVar9 = (**(code **)(*(long *)(lVar9 + 0x158) + 0xf0))(lVar9 + 0x158);
      FUN_0390a734(param_1 + 400,1,0x21,(int)fVar10,(int)*(float *)(lVar9 + 4),1,1,1,0,1);
      *(undefined4 *)(param_1 + 400) = uVar3;
      *(char **)(param_1 + 0x220) = "GameCaptureUploadBuffer";
      bVar7 = false;
      *(undefined4 *)(param_1 + 0x194) = uVar4;
      *(undefined8 *)(param_1 + 0x198) = uVar1;
      *(undefined8 *)(param_1 + 0x1a0) = uVar2;
      if ((*(byte *)(param_1 + 0x1de) >> 1 & 1) != 0) {
        bVar7 = 0x11 < *(ushort *)(param_1 + 0x228) &&
                *(ushort *)(param_1 + 0x228) - 0x59 < 0xffffffd6;
      }
      uVar8 = 1;
      local_78 = uVar3;
      uStack_74 = uVar4;
      local_70 = uVar1;
      uStack_68 = uVar2;
      FUN_038fd3e0(param_1 + 0x1e0,&local_78,param_1 + 0x1c0,0,"GameCaptureUploadBuffer",bVar7,1);
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

