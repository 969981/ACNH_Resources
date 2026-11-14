
void FUN_015dd0e4(long param_1,long *param_2)

{
  AudioOut *pAVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 local_38 [2];
  
  if (*(char *)(param_1 + 0x96c) == '\0') {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar7 = malloc(0xa20);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar7 = (undefined1 *)0x0;
        goto LAB_015dd170;
      }
    }
    puVar7 = (undefined1 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa20,8);
  }
LAB_015dd170:
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 0x370) = 0;
  *(undefined8 *)(puVar7 + 0x478) = 0;
  *(undefined4 *)(puVar7 + 0x480) = 0;
  *(undefined4 *)(puVar7 + 0x9a0) = 0;
  memset(puVar7 + 8,0,0x364);
  memset(puVar7 + 0x488,0,0x514);
  *(undefined8 *)(puVar7 + 0x9a8) = 0;
  *(undefined8 *)(puVar7 + 0x9b0) = 0;
  *(undefined8 *)(puVar7 + 0x9b8) = 0;
  *(undefined8 *)(puVar7 + 0x9c0) = 0;
  *(undefined8 *)(puVar7 + 0x9c8) = 0;
  *(undefined4 *)(puVar7 + 0x9d0) = 0;
  *(undefined2 *)(puVar7 + 0x9d4) = 0;
  *(undefined8 *)(puVar7 + 0x9d8) = 0x3f800000;
  *(undefined4 *)(puVar7 + 0x9e0) = 0;
  FUN_038e1bac(puVar7 + 0x9e8,0);
  puVar7[0xa18] = 0;
  *(undefined8 *)(puVar7 + 0x378) = 0;
  *(undefined8 *)(puVar7 + 0x380) = 0;
  *(undefined8 *)(puVar7 + 0x388) = 0;
  *(undefined8 *)(puVar7 + 0x390) = 0;
  *(undefined8 *)(puVar7 + 0x398) = 0;
  *(undefined8 *)(puVar7 + 0x3a0) = 0;
  *(undefined8 *)(puVar7 + 0x3a8) = 0;
  *(undefined8 *)(puVar7 + 0x3b0) = 0;
  *(undefined8 *)(puVar7 + 0x3b8) = 0;
  *(undefined8 *)(puVar7 + 0x3c0) = 0;
  *(undefined8 *)(puVar7 + 0x3c8) = 0;
  *(undefined8 *)(puVar7 + 0x3d0) = 0;
  *(undefined8 *)(puVar7 + 0x3d8) = 0;
  *(undefined8 *)(puVar7 + 0x3e0) = 0;
  *(undefined8 *)(puVar7 + 1000) = 0;
  *(undefined8 *)(puVar7 + 0x3f0) = 0;
  *(undefined8 *)(puVar7 + 0x3f8) = 0;
  *(undefined8 *)(puVar7 + 0x400) = 0;
  *(undefined8 *)(puVar7 + 0x408) = 0;
  *(undefined8 *)(puVar7 + 0x410) = 0;
  *(undefined8 *)(puVar7 + 0x418) = 0;
  *(undefined8 *)(puVar7 + 0x420) = 0;
  *(undefined8 *)(puVar7 + 0x428) = 0;
  *(undefined8 *)(puVar7 + 0x430) = 0;
  *(undefined8 *)(puVar7 + 0x438) = 0;
  *(undefined8 *)(puVar7 + 0x440) = 0;
  *(undefined8 *)(puVar7 + 0x448) = 0;
  *(undefined8 *)(puVar7 + 0x450) = 0;
  *(undefined8 *)(puVar7 + 0x458) = 0;
  *(undefined8 *)(puVar7 + 0x460) = 0;
  *(undefined8 *)(puVar7 + 0x468) = 0;
  *(undefined8 *)(puVar7 + 0x470) = 0;
  *(undefined8 *)(puVar7 + 0x30) = 0x20000;
  *(undefined8 *)(puVar7 + 0x478) = 0;
  *(undefined1 **)(param_1 + 0x958) = puVar7;
  FUN_015daa40(puVar7,param_2);
  lVar9 = *(long *)(param_1 + 0x958);
  uVar4 = *(undefined4 *)(param_1 + 0x3d4);
  uVar2 = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(lVar9 + 0x1c) = uVar4;
  *(undefined4 *)(lVar9 + 0x20) = uVar2;
  *(undefined8 *)(lVar9 + 0x14) = 0x20000bb80;
  *(undefined4 *)(lVar9 + 0x24) = 4;
  nn::audio::InitializeAudioOutParameter((AudioOutParameter *)local_38);
  local_38[0] = *(undefined4 *)(lVar9 + 0x14);
  pAVar1 = (AudioOut *)(lVar9 + 0x200);
  iVar3 = nn::audio::OpenDefaultAudioOut(pAVar1,(AudioOutParameter *)local_38);
  if (iVar3 == 0) {
    nn::audio::GetAudioOutChannelCount(pAVar1);
  }
  uVar4 = nn::audio::GetAudioOutSampleFormat(pAVar1);
  *(undefined4 *)(lVar9 + 0x368) = uVar4;
  uVar8 = nn::audio::GetSampleByteSize();
  *(undefined8 *)(lVar9 + 0x370) = uVar8;
  *(undefined1 *)(lVar9 + 0x13) = 1;
  return;
}

