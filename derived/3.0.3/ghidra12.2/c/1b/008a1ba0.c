
void FUN_008a1ba0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_DAT_04bb43c0;
  uVar6 = 0;
  do {
    uVar5 = (uint)uVar6;
    (**(code **)(*param_1 + 0x10))(auStack_60,param_1,uVar6);
    lVar7 = *(long *)puVar1;
    uVar2 = FUN_0277d6c4(auStack_60);
    if (*(long *)puVar1 == 0) {
LAB_008a1be4:
      lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar7 = (uVar6 >> 5) * 4;
      uVar2 = *(uint *)(lVar4 + lVar7) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
LAB_008a1c08:
      *(uint *)(lVar4 + lVar7) = uVar2;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((*(uint *)(lVar7 + 0x1d8) <= uVar2) ||
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_008a1be4;
      uVar3 = (**(code **)*param_2)(param_2,auStack_60);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*param_1 + 0x10))(auStack_58,param_1,uVar6);
        lVar7 = *(long *)puVar1;
        uVar2 = FUN_0277d6c4(auStack_58);
        if (*(long *)puVar1 == 0) goto LAB_008a1c0c;
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((*(uint *)(lVar7 + 0x1d8) <= uVar2) ||
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_008a1c0c;
        lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar7 = (ulong)(uVar5 >> 5) * 4;
        uVar2 = *(uint *)(lVar4 + lVar7) | 1 << (ulong)(uVar5 & 0x1f);
        goto LAB_008a1c08;
      }
    }
LAB_008a1c0c:
    uVar6 = (ulong)(uVar5 + 1);
    if (uVar5 + 1 == 15000) {
      return;
    }
  } while( true );
}

