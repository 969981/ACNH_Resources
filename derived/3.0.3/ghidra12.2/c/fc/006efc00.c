
undefined8
FUN_006efc00(long param_1,ulong *param_2,ulong param_3,ExifBuilder *param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong local_90;
  JpegEncoder aJStack_88 [56];
  undefined **local_50;
  undefined8 uStack_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_50 = &PTR_LAB_048fc2f0;
  uStack_48 = param_5;
  nn::image::JpegEncoder::JpegEncoder(aJStack_88,(MemoryResource *)&local_50);
  local_28 = *(undefined4 *)(param_1 + 0x120);
  uStack_24 = *(undefined4 *)(param_1 + 0x124);
  lVar3 = 0;
  if (*(long *)(param_1 + 0x138) != 0) {
    lVar3 = (*DAT_04c61fd0)();
  }
  nn::image::JpegEncoder::SetPixelData
            (aJStack_88,lVar3 + (ulong)*(uint *)(param_1 + 0x130),0xe,&local_28,1);
  iVar4 = *(int *)(param_1 + 0x110);
  nn::image::JpegEncoder::SetQuality((int)aJStack_88);
  nn::image::JpegEncoder::Analyze();
  if (0 < iVar4) {
    do {
      nn::image::JpegEncoder::SetQuality((int)aJStack_88);
      nn::image::JpegEncoder::Analyze();
      local_90 = 0;
      iVar2 = nn::image::JpegEncoder::Encode((ulong *)aJStack_88,&local_90,param_3,param_4);
      if ((iVar2 == 0) && (local_90 < *(ulong *)(param_1 + 0x118))) {
        if (param_2 != (ulong *)0x0) {
          *param_2 = local_90 & 0xffffffff;
        }
        break;
      }
      iVar2 = iVar4 + -10;
      bVar1 = 9 < iVar4;
      iVar4 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 8))();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::image::JpegEncoder::~JpegEncoder(aJStack_88);
  return 1;
}

