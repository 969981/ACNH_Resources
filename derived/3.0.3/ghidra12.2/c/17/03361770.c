
float FUN_03361770(long param_1,short param_2,ushort param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (param_3 < 0x20) {
    return 0.0;
  }
  lVar4 = 0;
  bVar1 = false;
  do {
    if (*(ushort *)((long)&DAT_0418dd00 + lVar4) <= param_3) {
      bVar1 = (bool)(param_3 <= *(ushort *)((long)&DAT_0418dd02 + lVar4) | bVar1);
    }
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x398);
  if (bVar1) {
    if (*(char *)(param_1 + 0x818) != '\0') {
LAB_03361828:
      return *(float *)(param_1 + 0x800);
    }
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x808) + 0xb0))
                        (*(long **)(param_1 + 0x808),param_2,param_3);
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0x808) + 0x80))(*(long **)(param_1 + 0x808),param_3);
    iVar3 = iVar3 + iVar2;
  }
  else {
    if (param_3 != 0xe265) {
      return *(float *)(param_1 + 0x7ec) * 41.0;
    }
    if (*(char *)(param_1 + 0x818) != '\0') goto LAB_03361828;
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x808) + 0xb0))
                        (0,*(long **)(param_1 + 0x808),param_2,0xe265);
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0x808) + 0x80))(*(long **)(param_1 + 0x808),0xe265);
    iVar3 = iVar3 + iVar2;
  }
  return *(float *)(param_1 + 0x7ec) * (float)iVar3;
}

