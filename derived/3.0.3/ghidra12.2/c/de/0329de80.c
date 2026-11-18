
void FUN_0329de80(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [8];
  char *local_50;
  undefined8 local_48;
  undefined *local_40;
  char *pcStack_38;
  
  lVar2 = param_2[1];
  (**(code **)(*param_2 + 0x58))(auStack_58,param_2);
  puVar1 = PTR_DAT_04bc8e68;
  local_40 = PTR_DAT_04bc8e68 + 0x10;
  local_48 = *(undefined8 *)(*(long *)(lVar2 + 0xf0) + 0x18);
  pcStack_38 = local_50;
  lVar2 = FUN_032d32b0(&local_48,&local_40);
  if (lVar2 != 0) {
    fVar6 = *(float *)(lVar2 + 0x54);
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar3 = *(long **)(*(long *)(param_1[3] + 0xf0) + 0x18);
    }
    else {
      local_40 = puVar1 + 0x10;
      pcStack_38 = *(char **)(PTR_PTR_04bb2238 + 8);
      plVar3 = (long *)FUN_032cb8e0(auStack_58,&local_40,*(undefined8 *)(param_1[3] + 0xf0));
    }
    lVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,"N_Btm",1);
    if (lVar2 != 0) {
      fVar4 = *(float *)(lVar2 + 0x54) - fVar6;
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
      fVar5 = 0.0;
      if (0.0 <= fVar4) {
        fVar5 = fVar4;
      }
      *(float *)(lVar2 + 0x54) = fVar5;
    }
    lVar2 = param_1[3];
    (**(code **)(*param_1 + 0x80))(auStack_58,param_1);
    local_40 = puVar1 + 0x10;
    local_48 = *(undefined8 *)(*(long *)(lVar2 + 0xf0) + 0x18);
    pcStack_38 = local_50;
    lVar2 = FUN_032d32b0(&local_48,&local_40);
    lVar2 = *(long *)(lVar2 + 0x20);
    fVar6 = *(float *)(lVar2 + 0x4c) - fVar6;
    *(byte *)(lVar2 + 0x50) = *(byte *)(lVar2 + 0x50) | 0x10;
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar6;
    }
    *(float *)(lVar2 + 0x4c) = fVar5;
  }
  return;
}

