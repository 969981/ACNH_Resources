
void FUN_030d3a64(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float local_3c [3];
  
  lVar4 = *(long *)(param_1 + 8);
  if (((*(int *)(param_2 + 0xc) != 0) && ((*(byte *)(param_2 + 8) & 1) != 0)) &&
     (lVar5 = *(long *)(lVar4 + 0x260), lVar5 != 0)) {
    iVar1 = FUN_02a8efb8(param_2);
    if (iVar1 == 1) {
      uVar8 = 0x40200000;
      local_3c[1] = 0.0;
      fVar7 = (float)*(int *)(param_2 + 0x1c);
      local_3c[2] = fVar7 * 5.0 + 2.5;
      local_3c[0] = (float)*(int *)(param_2 + 0x18) * 5.0 + 2.5;
      uVar6 = FUN_030cd3bc(lVar4,local_3c);
      uVar3 = **(undefined8 **)(lVar5 + 0x230);
      uVar2 = (*(undefined8 **)(lVar5 + 0x230))[1 < *(uint *)(lVar5 + 0x228)];
      *(undefined4 *)(lVar4 + 0x470) = uVar6;
      *(float *)(lVar4 + 0x474) = fVar7;
      *(undefined4 *)(lVar4 + 0x478) = uVar8;
      *(long *)(lVar4 + 0x480) = lVar5;
      *(undefined8 *)(lVar4 + 0x488) = uVar3;
      *(undefined8 *)(lVar4 + 0x490) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x030d3b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x440) + 0x18))(lVar4 + 0x440);
      return;
    }
  }
  return;
}

