
void FUN_01c0e820(long *param_1,int *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined *local_60;
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  
  if (*param_2 != -1) {
    lVar2 = FUN_0265c2a0();
    if (lVar2 == 0) {
      pbVar5 = PTR_DAT_04bb9cf0;
    }
    else if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
            (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      pbVar5 = (byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      pbVar5 = (byte *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    uVar4 = (ulong)*pbVar5;
    if (((uVar4 < 0x23) && (bVar1 = pbVar5[1], bVar1 <= (byte)PTR_DAT_04bc27f0[uVar4])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar4 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      local_45 = 0;
      local_50 = 8;
      local_58 = local_4c;
      local_4c[0] = 0;
      local_60 = PTR_DAT_04bb3768 + 0x10;
      FUN_038d1270(&local_60,"-----");
      FUN_038d1270(&local_60,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar4 * 8 + 0xb0),
                   (uint)bVar1);
      (**(code **)(local_60 + 0x18))(&local_60);
      FUN_01c0e6b4(param_1,local_58,param_3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01c0e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}

