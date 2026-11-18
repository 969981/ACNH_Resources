
void FUN_032b7600(long param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  undefined *local_50;
  char *local_48;
  
  puVar3 = PTR_DAT_04bc8e68;
  puVar2 = PTR_PTR_04bb2238;
  uVar5 = *param_3;
  fVar6 = (float)param_3[1];
  plVar1 = (long *)(param_1 + 8) + (ulong)param_2 * 0xd;
  if (0xe < param_2) {
    plVar1 = (long *)(param_1 + 8);
  }
  local_48 = *(char **)(PTR_PTR_04bb2238 + 8);
  if (*local_48 == '\0') {
    lVar4 = *(long *)(*(long *)(plVar1[1] + 0xf0) + 0x18);
  }
  else {
    local_50 = PTR_DAT_04bc8e68 + 0x10;
    lVar4 = FUN_032cb8e0(&local_58,&local_50,*(undefined8 *)(plVar1[1] + 0xf0));
  }
  *(undefined4 *)(lVar4 + 0x30) = uVar5;
  *(float *)(lVar4 + 0x34) = fVar6;
  *(undefined4 *)(lVar4 + 0x38) = 0;
  local_48 = "B_Hit";
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
  local_58 = *(undefined8 *)(*(long *)(*plVar1 + 0x20) + 0x18);
  local_50 = puVar3 + 0x10;
  lVar4 = FUN_032ba210(&local_58,&local_50,0);
  local_48 = *(char **)(puVar2 + 8);
  fVar7 = *(float *)(lVar4 + 0x54);
  if (*local_48 == '\0') {
    lVar4 = *(long *)(*(long *)(plVar1[2] + 0xf0) + 0x18);
  }
  else {
    local_50 = puVar3 + 0x10;
    lVar4 = FUN_032cb8e0(&local_58,&local_50,*(undefined8 *)(plVar1[2] + 0xf0));
  }
  *(undefined4 *)(lVar4 + 0x38) = 0;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
  *(undefined4 *)(lVar4 + 0x30) = uVar5;
  *(float *)(lVar4 + 0x34) = fVar6 + fVar7 * -0.5;
  return;
}

