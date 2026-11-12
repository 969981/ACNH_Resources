
undefined8 FUN_006efa80(long param_1,void *param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  
  nn::image::JpegDecoder::SetImageData(param_2,*(ulong *)(param_1 + 0x100));
  iVar1 = nn::image::JpegDecoder::Analyze();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = nn::image::JpegDecoder::GetAnalyzedDimension();
  *(ulong *)(param_1 + 0x120) = uVar2;
  uVar2 = FUN_0390c400(1,0x1d,uVar2,uVar2 >> 0x20,1,1,2);
  *(ulong *)(param_1 + 0x128) = uVar2 & 0xffffffff;
  uVar3 = (**(code **)(*param_3 + 0x78))(param_3);
  if (uVar3 <= (uVar2 & 0xffffffff)) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x128);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    puVar4 = malloc(0x38);
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x38,8);
  }
  puVar4[6] = 0;
  piVar7 = (int *)(puVar4 + 1);
  piVar7[0] = 0;
  piVar7[1] = 0;
  *puVar4 = &PTR_LAB_048fc328;
  *(undefined2 *)((long)puVar4 + 0x2a) = 0;
  puVar4[4] = 0;
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  if (lVar6 == 0) {
    iVar1 = 0;
    *(undefined2 *)((long)puVar4 + 0x2a) = 8;
    lVar6 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,puVar4,param_3,lVar6,0x2000,8);
    lVar6 = puVar4[3];
    *(undefined2 *)((long)puVar4 + 0x2a) = 8;
    iVar1 = 0;
    if (puVar4[4] != 0) {
      iVar1 = *piVar7 - *(int *)(puVar4[4] + 0x10);
    }
    if (lVar6 != 0) {
      uVar5 = *(undefined4 *)(lVar6 + 0x104);
      goto LAB_006efbe4;
    }
  }
  uVar5 = 0;
LAB_006efbe4:
  *(int *)(param_1 + 0x130) = iVar1;
  *(undefined4 *)(param_1 + 0x134) = uVar5;
  *(long *)(param_1 + 0x138) = lVar6;
  *(undefined8 **)(param_1 + 0x140) = puVar4;
  return 1;
}

