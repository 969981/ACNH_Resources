
void FUN_02124850(long param_1,uint *param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  float fVar8;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) && (lVar5 = FUN_026f480c(), lVar5 != 0)) {
    lVar2 = lVar5 + 0x10108 + (ulong)*param_2 * 0x150;
    if (1 < *param_2) {
      lVar2 = lVar5 + 0x10108;
    }
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    pcVar1 = (char *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
    if (*pcVar1 != '\0') {
      uVar7 = *(undefined4 *)(pcVar1 + 0xc);
      bVar3 = pcVar1[1];
      fVar8 = (float)((long)((float)(int)pcVar1[3] * 11930465.0) & 0xffffffff);
      lVar5 = **(long **)(param_1 + 0x1f0);
      *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(pcVar1 + 4);
      *(undefined4 *)(lVar5 + 0xd8) = uVar7;
      *(undefined4 *)(lVar5 + 0xe4) = 0;
      *(int *)(lVar5 + 0xdc) = (int)(fVar8 + fVar8);
      *(uint *)(lVar5 + 0xe0) = (uint)bVar3;
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02124940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar6)();
      return;
    }
  }
  return;
}

