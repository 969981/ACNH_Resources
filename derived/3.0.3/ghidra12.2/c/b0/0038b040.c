
float FUN_0038b040(long param_1,float *param_2,long *param_3)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  char local_64 [4];
  char *local_60;
  uint local_58;
  char local_54 [4];
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x148) + 0x9c);
  *param_2 = 0.0;
  uVar2 = *(ushort *)(param_1 + 0x114);
  if (((uVar2 ^ 0xffff) & 0x9000) == 0) {
    fVar10 = *(float *)(param_1 + 0xf8);
    pcVar7 = *(char **)(param_1 + 0xd8);
    iVar4 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
    if (iVar1 != 0) {
      iVar6 = 0;
      do {
        pcVar8 = pcVar7;
        while (pcVar7 = (char *)(**(code **)(*param_3 + 0x70))(param_3,local_64,pcVar8),
              local_64[0] == '\0') {
          bVar3 = pcVar7 <= pcVar8;
          pcVar8 = pcVar7;
          if (bVar3 || (char *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112)) <
                       pcVar7) goto LAB_0038b160;
        }
        local_54[0] = '\0';
        local_54[1] = '\0';
        local_54[2] = '\0';
        local_54[3] = '\0';
        local_60 = pcVar8;
        nn::util::PickOutCharacterFromUtf8String(local_54,&local_60);
        local_58 = 0;
        nn::util::ConvertCharacterUtf8ToUtf32(&local_58,local_54);
        if (pcVar7 == (char *)0x0) break;
        iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))
                          (*(long **)(param_1 + 0xf0),local_58);
        iVar6 = iVar6 + 1;
        *param_2 = *param_2 + (fVar10 / (float)iVar4) * (*(float *)(param_1 + 0x104) + (float)iVar5)
        ;
      } while (iVar6 != iVar1);
    }
LAB_0038b160:
    fVar10 = *(float *)(param_1 + 0x50);
  }
  else {
    if (((uVar2 ^ 0xffff) & 0x3000) == 0) {
      return *(float *)(*(long *)(param_1 + 0x150) + 0x18);
    }
    if ((uVar2 >> 9 & 1) == 0) {
      if (iVar1 - 1U == 0) {
        return 0.0;
      }
      fVar10 = (float)(iVar1 - 1U);
      fVar9 = *(float *)(*(long *)(param_1 + 0x150) + 4);
      goto LAB_0038b1b0;
    }
    if (iVar1 != 0) {
      pcVar7 = *(char **)(param_1 + 0xd8);
      iVar4 = 0;
      do {
        pcVar8 = pcVar7;
        while (pcVar7 = (char *)(**(code **)(*param_3 + 0x70))(param_3,local_64,pcVar8),
              local_64[0] == '\0') {
          bVar3 = pcVar7 <= pcVar8;
          pcVar8 = pcVar7;
          if (bVar3 || (char *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112)) <
                       pcVar7) goto LAB_0038b284;
        }
        local_54[0] = '\0';
        local_54[1] = '\0';
        local_54[2] = '\0';
        local_54[3] = '\0';
        local_60 = pcVar8;
        nn::util::PickOutCharacterFromUtf8String(local_54,&local_60);
        local_58 = 0;
        nn::util::ConvertCharacterUtf8ToUtf32(&local_58,local_54);
        if (pcVar7 == (char *)0x0) break;
        if ((*(ushort *)(param_1 + 0x114) & 0x1000) != 0 || iVar4 != 0) {
          iVar6 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))
                            (*(long **)(param_1 + 0xf0),local_58);
          *param_2 = *param_2 + *(float *)(param_1 + 0x104) + (float)iVar6;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar1);
    }
LAB_0038b284:
    fVar10 = *param_2;
  }
  if (fVar10 == 0.0) {
    return 0.0;
  }
  fVar9 = *(float *)(*(long *)(param_1 + 0x150) + 4);
LAB_0038b1b0:
  return fVar9 / fVar10;
}

