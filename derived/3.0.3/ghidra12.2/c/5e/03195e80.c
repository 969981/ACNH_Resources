
void FUN_03195e80(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  int iVar3;
  short *psVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte local_64 [4];
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  uVar7 = 0;
  pbVar1 = (byte *)(param_1 + 0x1f8);
  puVar2 = (ulong *)(param_1 + 0x1c4f0);
  *puVar2 = 0;
  do {
    iVar3 = FUN_02672e00(pbVar1);
    uVar6 = (uint)uVar7;
    if (iVar3 <= (int)uVar6 || 0x7fffffff < uVar6) {
      uVar6 = 0xffffffff;
    }
    if (uVar6 < 0x28) {
      psVar4 = (short *)FUN_02677ea0(pbVar1,uVar6);
      local_46 = (undefined1)psVar4[1];
      local_48 = *psVar4;
      local_44 = *(undefined4 *)(psVar4 + 2);
      local_45 = *(undefined1 *)((long)psVar4 + 3);
      if (*(char *)(param_2 + 2) == '\0') {
        local_64[0] = *pbVar1;
        if (7 < local_64[0]) {
          local_64[0] = 0xff;
        }
        uVar5 = FUN_0266a0c0(local_64,&local_48,uVar6);
        if ((uVar5 & 1) == 0) goto joined_r0x03195fb8;
      }
      else {
joined_r0x03195fb8:
        if (((local_48 == -2) ||
            (((code *)*param_2 != (code *)0x0 &&
             (uVar5 = (*(code *)*param_2)(&local_48), (uVar5 & 1) != 0)))) ||
           (((long *)param_2[1] != (long *)0x0 &&
            ((uVar5 = (**(code **)(*(long *)param_2[1] + 8))(), (uVar5 & 1) != 0 &&
             (uVar5 = (*(code *)**(undefined8 **)param_2[1])((undefined8 *)param_2[1],&local_48),
             (uVar5 & 1) != 0)))))) goto LAB_03195ee0;
      }
      *puVar2 = *puVar2 | 1L << (uVar7 & 0x3f);
    }
LAB_03195ee0:
    uVar7 = uVar7 + 1;
    if (uVar7 == 0x28) {
      return;
    }
  } while( true );
}

