
void FUN_003af6a0(long *param_1,int param_2,undefined1 (*param_3) [12],int param_4)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(char *)((long)param_1 + 0xe) == '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lVar5 = 0;
  }
  else {
    if (*(char *)((long)param_1 + 0xd) != '\0') {
      param_4 = param_4 + (uint)*(byte *)((long)param_1 + 0xf) * param_2;
    }
    lVar5 = 0;
    if (param_1[4] != 0) {
      lVar5 = param_1[4] + (long)param_4 * 0x48;
    }
  }
  puVar4 = (undefined4 *)FUN_00347cc4(lVar5);
  auVar3 = *param_3;
  auVar2 = *param_3;
  uVar7 = *(undefined8 *)param_3[2];
  uVar6 = *(undefined8 *)(param_3[1] + 4);
  bVar1 = *(byte *)(*param_1 + 0x5a);
  uVar9 = *(undefined8 *)(param_3[3] + 4);
  uVar8 = *(undefined8 *)(param_3[2] + 8);
  uVar11 = *(undefined8 *)(param_3[4] + 8);
  uVar10 = *(undefined8 *)param_3[4];
  *puVar4 = auVar2._0_4_;
  puVar4[1] = (int)uVar6;
  puVar4[2] = (int)uVar8;
  puVar4[3] = (int)uVar10;
  puVar4[0xc] = (uint)bVar1;
  *(ulong *)(puVar4 + 6) = CONCAT44((int)((ulong)uVar10 >> 0x20),(int)((ulong)uVar8 >> 0x20));
  *(ulong *)(puVar4 + 4) = CONCAT44((int)((ulong)uVar6 >> 0x20),auVar2._4_4_);
  puVar4[8] = auVar3._8_4_;
  puVar4[9] = (int)uVar7;
  puVar4[10] = (int)uVar9;
  puVar4[0xb] = (int)uVar11;
  memcpy(puVar4 + 0x10,(void *)param_1[10],(param_1[0xb] << 0x1e) >> 0x1e & 0xfffffffffffffffc);
  FUN_00347cdc(lVar5,0,0x100);
  FUN_00347cd8(lVar5);
  return;
}

