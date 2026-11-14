
undefined8 FUN_0157fa74(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  float *pfVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(char *)(param_1 + 0x40) == '\0' && *(char *)(param_1 + 0x70) == '\0') &&
      *(char *)(param_1 + 0x80) == '\0') {
    uVar9 = 0;
    if ((((*(char *)(param_1 + 0xc80) == '\0') && (*(char *)(param_1 + 0x90) == '\0')) &&
        (*(char *)(param_1 + 0xa0) == '\0')) &&
       ((*(char *)(param_1 + 0xb0) == '\0' && (*(char *)(param_1 + 0xc0) == '\0')))) {
      uVar9 = 1;
      *(undefined8 *)(param_1 + 0xc70) = param_3;
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 3;
      uVar5 = *PTR_DAT_04bb59e0;
      *(undefined4 *)(param_1 + 0xc50) = param_2;
      *(undefined1 *)(param_1 + 0xc68) = uVar5;
      puVar6 = PTR_DAT_04bb2200;
      *(undefined8 *)(param_1 + 0xc58) = 0x19000;
      FUN_015812cc(*(undefined8 *)(*(long *)puVar6 + 0x130));
      if ((param_4 & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0xe8);
        uVar3 = *(undefined4 *)(param_1 + 400);
        uVar4 = *(undefined4 *)(param_1 + 0x194);
        uVar1 = *(undefined8 *)(param_1 + 0x198);
        uVar2 = *(undefined8 *)(param_1 + 0x1a0);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0x158) + 0xf0))(lVar10 + 0x158);
        fVar11 = *pfVar7;
        lVar10 = (**(code **)(*(long *)(lVar10 + 0x158) + 0xf0))(lVar10 + 0x158);
        FUN_0390a734(param_1 + 400,1,0x21,(int)fVar11,(int)*(float *)(lVar10 + 4),1,1,1,0,1);
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
        local_78 = uVar3;
        uStack_74 = uVar4;
        local_70 = uVar1;
        uStack_68 = uVar2;
        FUN_038fd3e0(param_1 + 0x1e0,&local_78,param_1 + 0x1c0,0,"GameCaptureUploadBuffer",bVar8,1);
      }
      else {
        *(undefined1 *)(param_1 + 0xc90) = 1;
      }
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

