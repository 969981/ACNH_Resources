
void FUN_0038079c(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar1 = FUN_0038d070(param_4,*param_3);
  *(uint *)(param_3 + 6) = uVar1;
  lVar3 = *(long *)(*(long *)(param_4 + 200) + 0x38);
  if (lVar3 == 0) goto LAB_003808e4;
  lVar3 = lVar3 + (ulong)uVar1;
  lVar4 = param_3[1];
  if (((lVar4 == 0) || ((*(byte *)(lVar4 + 4) >> 1 & 1) == 0)) ||
     (*(char *)((long)param_3 + 0x54) == '\0')) {
    FUN_00378348(&local_48,lVar4 + 0x18,param_3 + 2);
    if ((*(byte *)(param_3[1] + 4) & 1) == 0) {
      *(undefined4 *)(lVar3 + 0x90) = local_48;
      *(undefined4 *)(lVar3 + 0x98) = 0;
      *(undefined4 *)(lVar3 + 0x94) = local_44;
      *(undefined4 *)(lVar3 + 0x9c) = local_40;
      *(undefined4 *)(lVar3 + 0xa0) = local_3c;
      *(undefined4 *)(lVar3 + 0xa8) = 0;
      *(undefined4 *)(lVar3 + 0xa4) = local_38;
      *(undefined4 *)(lVar3 + 0xac) = local_34;
      lVar4 = param_3[1];
    }
    else {
      *(undefined4 *)(lVar3 + 0x70) = local_48;
      *(undefined4 *)(lVar3 + 0x78) = 0;
      *(undefined4 *)(lVar3 + 0x74) = local_44;
      *(undefined4 *)(lVar3 + 0x7c) = local_40;
      *(undefined4 *)(lVar3 + 0x80) = local_3c;
      *(undefined4 *)(lVar3 + 0x88) = 0;
      *(undefined4 *)(lVar3 + 0x84) = local_38;
      *(undefined4 *)(lVar3 + 0x8c) = local_34;
      lVar4 = param_3[1];
    }
    if (lVar4 != 0) goto LAB_0038088c;
  }
  else {
LAB_0038088c:
    if ((*(byte *)(lVar4 + 4) >> 1 & 1) != 0) {
      param_2 = 0x437f0000;
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(*param_3 + 0x5a));
      *(float *)(lVar3 + 0xdc) = (fVar5 / 255.0) / 255.0;
    }
  }
  local_48 = FUN_0037d114(*param_3);
  local_44 = param_2;
  FUN_00364a10(param_4,lVar3,&local_48,*param_3 + 0x50,1,&DAT_04134eb8);
LAB_003808e4:
  if ((param_3[0xb] != 0) ||
     (((param_3[1] != 0 && ((*(byte *)(param_3[1] + 4) >> 1 & 1) != 0)) &&
      (*(char *)((long)param_3 + 0x54) == '\0')))) {
    uVar2 = FUN_0038d070(param_4,*param_3);
    *(undefined4 *)(param_3 + 10) = uVar2;
    FUN_003817d8(param_3,param_4);
  }
  return;
}

