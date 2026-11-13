
void FUN_01495354(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  ulong uVar7;
  long *plVar8;
  long local_50;
  char local_48;
  char local_47;
  char local_46;
  
  lVar2 = param_1 + 0x14;
  lVar3 = param_1 + 0xc;
  lVar4 = lVar2 + ((ulong)~*(uint *)(param_1 + 0x10) & 1) * 0x10;
  *(undefined4 *)(lVar4 + 8) = 0;
  FUN_01494990(lVar4,lVar3,1,1);
  puVar5 = (undefined8 *)(lVar2 + ((ulong)*(uint *)(param_1 + 0x10) & 1) * 0x10);
  if (*(int *)((long)puVar5 + 4) != 0) {
    cVar6 = *(char *)(param_1 + 0x8a);
    FUN_0071c8d0(&local_50,(int *)((long)puVar5 + 4),lVar3,0);
    if (local_50 != 0) {
      if ((local_47 == '\0') || ((cVar6 != '\0' && ((local_48 == '\0' || (local_46 == '\0'))))))
      goto LAB_0149540c;
      FUN_006fb3d0();
    }
    FUN_01494990(puVar5,lVar3,0,1);
  }
  *(undefined8 *)((long)puVar5 + 6) = 0;
  *puVar5 = 0;
LAB_0149540c:
  plVar8 = (long *)(param_1 + 0x58);
  uVar1 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (((uVar7 & 1) == 0) || (0x16 < *(uint *)(lVar2 + (ulong)(uVar1 & 1) * 0x10))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01495460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar8)(plVar8);
  return;
}

