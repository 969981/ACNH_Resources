
float FUN_0035045c(long param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_50 [8];
  short local_48;
  ushort local_44;
  
  (**(code **)(**(long **)(param_1 + 0x28) + 0x90))(*(long **)(param_1 + 0x28),auStack_50,param_2);
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar2 = (float)NEON_ucvtf((uint)local_44);
    fVar2 = *(float *)(param_1 + 0xc) * fVar2;
    fVar1 = *(float *)(param_1 + 0xc) * (float)(int)local_48;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x20);
    fVar1 = (float)NEON_ucvtf((uint)local_44);
    fVar1 = (fVar2 - *(float *)(param_1 + 0xc) * fVar1) * 0.5 +
            *(float *)(param_1 + 0xc) * (float)(int)local_48;
  }
  FUN_0035022c(SUB42(fVar1 + *(float *)(param_1 + 0x14),0),param_1,auStack_50);
  *(float *)(param_1 + 0x14) = fVar2 + *(float *)(param_1 + 0x14);
  return fVar2;
}

