
void FUN_0281c9e0(int *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_05574040 != 0) &&
     (lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar4 != 0))
  {
    if ((*(long *)(lVar4 + 0x276d48) == 0) ||
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x276d48) + 0x10), puVar5 == (undefined8 *)0x0))
    {
      uVar3 = 1;
      iVar2 = *param_1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
      iVar2 = *param_1;
    }
    if (iVar2 != 0) {
      lVar7 = *(long *)(param_1 + 2);
      iVar8 = 0;
      do {
        if ((*(long *)(lVar4 + 0x276d48) != 0) &&
           (plVar6 = *(long **)(*(long *)(lVar4 + 0x276d48) + 0x20), plVar6 != (long *)0x0)) {
          local_68 = *(long *)(lVar4 + 0x276d28);
          local_60 = *(undefined8 *)(lVar4 + 0x276d30);
          uStack_58 = 0x53c;
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
        }
        lVar1 = *(long *)(lVar4 + 0x276d30) + *(long *)(lVar4 + 0x276d28);
        *(uint *)(lVar1 + 0x238) =
             *(uint *)(lVar1 + 0x238) &
             (0xf << (ulong)((*(uint *)(lVar7 + (long)iVar8 * 0x3c + 0x38) & 7) << 2) ^ 0xffffffffU)
        ;
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x276d48) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x276d48) + 0x18), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)();
    }
  }
  return;
}

