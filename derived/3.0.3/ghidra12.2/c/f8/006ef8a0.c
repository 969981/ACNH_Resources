
undefined8 FUN_006ef8a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  float fVar7;
  undefined8 local_c0 [10];
  undefined **local_70;
  long lStack_68;
  
  if (param_4 == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar1 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0xa8);
    }
    param_4 = *plVar1;
  }
  local_70 = &PTR_LAB_048fc2f0;
  lStack_68 = param_4;
  nn::image::JpegDecoder::JpegDecoder((JpegDecoder *)local_c0,(MemoryResource *)&local_70);
  uVar4 = FUN_006efa80(param_1,local_c0,param_4);
  if ((uVar4 & 1) != 0) {
    lVar3 = 0;
    if (*(long *)(param_1 + 0x138) != 0) {
      lVar3 = (**(code **)PTR_DAT_04bb2cd8)();
    }
    iVar2 = nn::image::JpegDecoder::Decode
                      (local_c0,lVar3 + (ulong)*(uint *)(param_1 + 0x130),
                       (int)*(undefined8 *)(param_1 + 0x128));
    if (iVar2 == 0) {
      nn::image::JpegDecoder::~JpegDecoder((JpegDecoder *)local_c0);
      lVar3 = 0;
      do {
        fVar7 = powf((float)(int)lVar3 / 255.0,0.45454544);
        *(char *)(param_1 + lVar3) = (char)(int)(fVar7 * 255.0);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x100);
      lVar3 = 0;
      if (*(long *)(param_1 + 0x138) != 0) {
        lVar3 = (**(code **)PTR_DAT_04bb2cd8)();
      }
      if (*(long *)(param_1 + 0x128) != 0) {
        uVar4 = 0;
        lVar3 = lVar3 + (ulong)*(uint *)(param_1 + 0x130);
        do {
          bVar5 = *(byte *)(lVar3 + uVar4);
          if ((~(uint)uVar4 & 3) != 0) {
            bVar5 = *(byte *)(param_1 + (ulong)bVar5);
          }
          *(byte *)(lVar3 + uVar4) = bVar5;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulong *)(param_1 + 0x128));
      }
      local_c0[0] = 0;
      FUN_006efc00(param_1,local_c0,param_2,param_3,param_4);
      return local_c0[0];
    }
    if (*(long **)(param_1 + 0x140) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x140) + 8))();
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(long *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  nn::image::JpegDecoder::~JpegDecoder((JpegDecoder *)local_c0);
  return 0;
}

