
undefined8 FUN_0157fe00(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  float *pfVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  void *__dest;
  void *__src;
  float fVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(char *)(param_1 + 0x40) == '\0' && *(char *)(param_1 + 0x70) == '\0') &&
      *(char *)(param_1 + 0x80) == '\0') {
    uVar11 = 0;
    if ((((*(char *)(param_1 + 0xc80) == '\0') && (*(char *)(param_1 + 0x90) == '\0')) &&
        (*(char *)(param_1 + 0xa0) == '\0')) &&
       ((*(char *)(param_1 + 0xb0) == '\0' && (*(char *)(param_1 + 0xc0) == '\0')))) {
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined1 *)(param_1 + 200) = 0;
      puVar7 = PTR_DAT_04bb59e0;
      __dest = *(void **)(param_1 + 0xca8);
      *(undefined4 *)(param_1 + 0xd8) = 2;
      *(undefined *)(param_1 + 0xc68) = *puVar7;
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (void *)param_2[1];
      if (__dest != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar10 = 0;
        do {
          if (*(char *)(param_2[1] + lVar10) == '\0') goto LAB_0157ff1c;
          lVar1 = param_2[1] + lVar10;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_0157ff1c;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_0157ff1c;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_0157ff1c:
        iVar2 = (int)lVar10;
        if (*(int *)(param_1 + 0xcb0) <= (int)lVar10) {
          iVar2 = *(int *)(param_1 + 0xcb0) + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        *(undefined1 *)((long)__dest + (long)iVar2) = 0;
      }
      FUN_015812cc(*(undefined8 *)(DAT_05231900 + 0x130));
      lVar10 = *(long *)(param_1 + 0xe8);
      uVar5 = *(undefined4 *)(param_1 + 400);
      uVar6 = *(undefined4 *)(param_1 + 0x194);
      uVar3 = *(undefined8 *)(param_1 + 0x198);
      uVar4 = *(undefined8 *)(param_1 + 0x1a0);
      pfVar8 = (float *)(**(code **)(*(long *)(lVar10 + 0x158) + 0xf0))(lVar10 + 0x158);
      fVar12 = *pfVar8;
      lVar10 = (**(code **)(*(long *)(lVar10 + 0x158) + 0xf0))(lVar10 + 0x158);
      FUN_0390a734(param_1 + 400,1,0x21,(int)fVar12,(int)*(float *)(lVar10 + 4),1,1,1,0,1);
      *(undefined4 *)(param_1 + 400) = uVar5;
      *(char **)(param_1 + 0x220) = "GameCaptureUploadBuffer";
      bVar9 = false;
      *(undefined4 *)(param_1 + 0x194) = uVar6;
      *(undefined8 *)(param_1 + 0x198) = uVar3;
      *(undefined8 *)(param_1 + 0x1a0) = uVar4;
      if ((*(byte *)(param_1 + 0x1de) >> 1 & 1) != 0) {
        bVar9 = 0x11 < *(ushort *)(param_1 + 0x228) &&
                *(ushort *)(param_1 + 0x228) - 0x59 < 0xffffffd6;
      }
      uVar11 = 1;
      local_78 = uVar5;
      uStack_74 = uVar6;
      local_70 = uVar3;
      uStack_68 = uVar4;
      FUN_038fd3e0(param_1 + 0x1e0,&local_78,param_1 + 0x1c0,0,"GameCaptureUploadBuffer",bVar9,1);
    }
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}

