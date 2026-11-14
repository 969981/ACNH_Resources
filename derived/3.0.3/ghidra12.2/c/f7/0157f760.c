
undefined8 FUN_0157f760(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
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
      *(undefined4 *)(param_1 + 0xd8) = 0;
      lVar7 = *(long *)PTR_DAT_04bb2200;
      *(undefined *)(param_1 + 0xc68) = *PTR_DAT_04bb59e0;
      FUN_015812cc(*(undefined8 *)(lVar7 + 0x130));
      lVar7 = *(long *)(param_1 + 0xe8);
      uVar3 = *(undefined4 *)(param_1 + 400);
      uVar4 = *(undefined4 *)(param_1 + 0x194);
      uVar1 = *(undefined8 *)(param_1 + 0x198);
      uVar2 = *(undefined8 *)(param_1 + 0x1a0);
      pfVar5 = (float *)(**(code **)(*(long *)(lVar7 + 0x158) + 0xf0))(lVar7 + 0x158);
      fVar9 = *pfVar5;
      lVar7 = (**(code **)(*(long *)(lVar7 + 0x158) + 0xf0))(lVar7 + 0x158);
      FUN_0390a734(param_1 + 400,1,0x21,(int)fVar9,(int)*(float *)(lVar7 + 4),1,1,1,0,1);
      *(undefined4 *)(param_1 + 400) = uVar3;
      *(char **)(param_1 + 0x220) = "GameCaptureUploadBuffer";
      bVar6 = false;
      *(undefined4 *)(param_1 + 0x194) = uVar4;
      *(undefined8 *)(param_1 + 0x198) = uVar1;
      *(undefined8 *)(param_1 + 0x1a0) = uVar2;
      if ((*(byte *)(param_1 + 0x1de) >> 1 & 1) != 0) {
        bVar6 = 0x11 < *(ushort *)(param_1 + 0x228) &&
                *(ushort *)(param_1 + 0x228) - 0x59 < 0xffffffd6;
      }
      uVar8 = 1;
      local_78 = uVar3;
      uStack_74 = uVar4;
      local_70 = uVar1;
      uStack_68 = uVar2;
      FUN_038fd3e0(param_1 + 0x1e0,&local_78,param_1 + 0x1c0,0,"GameCaptureUploadBuffer",bVar6,1);
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

