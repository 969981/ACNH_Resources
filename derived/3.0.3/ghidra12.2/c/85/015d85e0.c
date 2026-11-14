
undefined8 FUN_015d85e0(long param_1,long param_2,long param_3,ulong param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  size_t __n;
  uint uVar10;
  int *piVar11;
  char *__s;
  undefined2 *puVar12;
  undefined *local_60;
  char *pcStack_58;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    return 0;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  uVar3 = *(undefined4 *)(param_3 + 0x2c);
  nn::image::JpegDecoder::SetImageData((void *)(param_1 + 0x58),*(ulong *)(param_3 + 0x10));
  nn::image::JpegDecoder::Analyze();
  uVar7 = nn::image::JpegDecoder::GetAnalyzedDimension();
  iVar6 = FUN_0390c400(1,*(undefined2 *)(param_2 + 0xa8),uVar7,uVar7 >> 0x20,1,1,2);
  uVar10 = *(uint *)(param_2 + 0x10);
  lVar8 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar8 = (**(code **)PTR_DAT_04bb2cd8)();
  }
  iVar6 = nn::image::JpegDecoder::Decode((void *)(param_1 + 0x58),lVar8 + (ulong)uVar10,iVar6);
  if (iVar6 == 0) {
    if ((param_4 & 1) != 0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = "WherearenPhotographTexture";
      FUN_015da0cc(param_2,uVar2,uVar3,&local_60);
    }
    __s = *(char **)(param_2 + 0xa0);
    puVar12 = *(undefined2 **)(param_2 + 0x118);
    if (__s == (char *)0x0) {
      __n = 0;
      uVar7 = 0;
      *puVar12 = 0;
    }
    else {
      __n = strlen(__s);
      *puVar12 = (short)__n;
      if (__n == 0) {
        uVar7 = 0;
      }
      else {
        memmove(puVar12 + 1,__s,__n);
        uVar7 = __n & 0xffff;
      }
    }
    uVar10 = (uint)__n;
    if (0 < (int)(((uVar10 & 0xfffffffe) - (uVar10 & 0xffff)) + 2)) {
      memset((void *)((long)puVar12 + uVar7 + 2),0,(ulong)((uVar10 | 1) - (uVar10 & 0xffff)) + 1);
    }
    piVar11 = (int *)(param_2 + 0x60);
    if (*piVar11 == -1) {
      lVar8 = -1;
    }
    else {
      lVar8 = *(long *)PTR_DAT_04bc1010;
      uVar10 = *piVar11 - (uint)*(ushort *)(lVar8 + 0x3da);
      if (*(uint *)(lVar8 + 0x368) <= uVar10) {
        uVar10 = 0;
      }
      puVar1 = (uint *)(*(long *)(lVar8 + 0x370) + (long)(int)uVar10 * 0x20 + 4);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar8 = (long)*piVar11;
    }
    *(long *)(param_2 + 0x148) = lVar8;
    *(long *)(param_2 + 0x380) = param_2 + 0xb8;
    *(undefined4 *)(param_2 + 0x388) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x38c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined8 *)(param_2 + 0x390) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x398) = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x3a0) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x3a4) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x3a8) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x3cf) = *(undefined8 *)(param_2 + 0x57);
    *(undefined8 *)(param_2 + 0x3c8) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x3c0) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_2 + 0x40);
    FUN_038fd1e0(param_2 + 0x3d8);
    FUN_038fd2f0(param_2 + 0x3d8,piVar11);
    *(undefined8 *)(param_2 + 0x418) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined4 *)(param_2 + 0x420) = *(undefined4 *)(param_2 + 0xa8);
    puVar1 = (uint *)(param_2 + 0x45c);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined2 *)(param_2 + 0x44f) = 0x101;
    *(undefined1 *)(param_2 + 0x451) = 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 & 0xfffffffd | 2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined2 *)(param_2 + 0x44c) = 0;
    *(undefined1 *)(param_2 + 0x44e) = 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar9 = 1;
    *(ushort *)(param_2 + 0x474) = *(ushort *)(param_2 + 0x474) | 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

