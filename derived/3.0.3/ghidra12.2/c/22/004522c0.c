
void FUN_004522c0(long param_1,ulong *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  *(ulong *)(param_1 + 0x68) = param_2[1];
  uVar4 = *param_2;
  lVar5 = 0;
  *(ulong *)(param_1 + 0x70) = uVar4 & param_3;
  uVar3 = 1;
  if ((uVar4 & param_3 & 1) != 0) goto LAB_00452324;
  do {
    *(undefined8 *)(param_1 + 0x78 + lVar5 * 8) = 0;
    while( true ) {
      if (lVar5 == 0x1f) {
        uVar1 = FUN_004274f0(param_2);
        *(undefined4 *)(param_1 + 0x60) = uVar1;
        return;
      }
      lVar5 = lVar5 + 1;
      uVar3 = (ulong)(uint)(1 << (ulong)((uint)lVar5 & 0x1f));
      if ((*(ulong *)(param_1 + 0x70) & uVar3) == 0) break;
LAB_00452324:
      if (((*param_2 & uVar3) == 0) ||
         (puVar2 = (undefined8 *)FUN_00426db0(param_2), puVar2 == (undefined8 *)0x0)) break;
      *(undefined8 *)(param_1 + 0x78 + lVar5 * 8) = *puVar2;
    }
  } while( true );
}

