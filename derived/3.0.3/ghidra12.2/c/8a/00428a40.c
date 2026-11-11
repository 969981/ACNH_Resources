
void FUN_00428a40(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long local_68;
  
  if (param_1 == 0) {
    FUN_00423880(param_3,"unnamed",0xffffffff);
  }
  else {
    FUN_00423880(param_3,param_1,0xffffffff);
  }
  if ((param_2 != 0) && (*(short *)(param_2 + 8) != 0)) {
    FUN_00423880(param_3,&DAT_040b920d,0xffffffff);
    if (*(short *)(param_2 + 8) != 0) {
      uVar7 = 0;
LAB_00428acc:
      plVar1 = (long *)(param_2 + 0x10 + uVar7 * 0x10);
      if (uVar7 != 0) {
        FUN_00423880(param_3,&DAT_0407494a,0xffffffff);
      }
      if (*(char *)plVar1[1] != 't') goto LAB_00428b24;
      puVar3 = (ulong *)*plVar1;
      if (puVar3 != (ulong *)0x0) {
        puVar5 = puVar3;
        do {
          uVar4 = (uint)*puVar5;
          if ((uVar4 >> 3 & 1) != 0) {
            uVar4 = (uVar4 & 7) - (uVar4 >> 1 & 1);
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
            uVar2 = puVar5[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
            uVar6 = *puVar3;
            uVar4 = (uint)uVar6;
            goto joined_r0x00428b9c;
          }
          if ((*puVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_00428ba8;
          }
          puVar5 = (ulong *)puVar5[1];
        } while (puVar5 != (ulong *)0x0);
        uVar2 = 0;
        uVar6 = *puVar3;
        uVar4 = (uint)uVar6;
joined_r0x00428b9c:
        do {
          if ((uVar4 >> 0xf & 1) != 0) goto LAB_00428bc8;
          if (((uVar6 & 9) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
          goto LAB_00428bc0;
LAB_00428ba8:
          uVar6 = *puVar3;
          uVar4 = (uint)uVar6;
        } while( true );
      }
      uVar2 = 0;
LAB_00428bc0:
      uVar6 = 0;
      goto LAB_00428c08;
    }
LAB_00428c20:
    FUN_00423880(param_3,&DAT_040f7c84,0xffffffff);
  }
  return;
LAB_00428b24:
  local_68 = *plVar1;
  FUN_00424e60(param_3,&DAT_04070007,&DAT_04853818,&local_68);
  uVar7 = uVar7 + 1;
  if (*(ushort *)(param_2 + 8) <= uVar7) goto LAB_00428c20;
  goto LAB_00428acc;
LAB_00428bc8:
  uVar4 = (uVar4 & 0x7fff) - (uVar4 >> 1 & 0x1555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar6 = puVar3[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
LAB_00428c08:
  FUN_00428a40(uVar2,uVar6,param_3);
  uVar7 = uVar7 + 1;
  if (*(ushort *)(param_2 + 8) <= uVar7) goto LAB_00428c20;
  goto LAB_00428acc;
}

