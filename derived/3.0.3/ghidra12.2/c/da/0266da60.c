
bool FUN_0266da60(undefined4 param_1,uint param_2,byte param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_48 = CONCAT44(local_48._4_4_,param_1);
  if (DAT_05574040 != 0) {
    puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar8 == 0) {
        return false;
      }
      lVar8 = lVar8 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return false;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return false;
      }
      lVar8 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar8 == 0) {
        return false;
      }
    }
    if ((uint)local_48 < 8) {
      lVar4 = lVar8 + 0x119228 + (local_48 & 0xffffffff) * 0xfa08;
      if (7 < (uint)local_48) {
        lVar4 = lVar8 + 0x119228;
      }
      lVar8 = *(long *)(lVar4 + 0xf9f8);
      if (lVar8 == 0) {
        uVar9 = 0;
      }
      else {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          lVar8 = *(long *)(lVar4 + 0xf9f8);
          uVar9 = uVar9 & 0xffffffff;
          if (lVar8 == 0) goto LAB_0266db84;
        }
        plVar10 = *(long **)(lVar8 + 0x20);
        if (plVar10 != (long *)0x0) {
          local_48 = *(ulong *)(lVar4 + 0xf9d8);
          local_40 = *(undefined8 *)(lVar4 + 0xf9e0);
          uStack_38 = 0xe;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_48);
        }
      }
LAB_0266db84:
      local_48 = CONCAT44(local_48._4_4_,param_2);
      pcVar2 = (char *)(*(long *)(lVar4 + 0xf9e0) + *(ulong *)(lVar4 + 0xf9d8));
      pcVar3 = pcVar2 + (ulong)param_2 + 1;
      if (5 < param_2) {
        pcVar3 = pcVar2 + 1;
      }
      bVar7 = *pcVar3 != '\0';
      if (*pcVar3 != '\0') {
        pbVar1 = (byte *)(pcVar2 + 7);
        if ((param_3 & 0xfe) != 0) {
          param_3 = 2;
        }
        pbVar5 = pbVar1 + param_2;
        if (5 < param_2) {
          pbVar5 = pbVar1;
        }
        bVar6 = *pbVar5;
        pbVar5 = pbVar1 + param_2;
        if (5 < param_2) {
          pbVar5 = pbVar1;
        }
        *pbVar5 = param_3;
        *pcVar2 = (param_3 - bVar6) + *pcVar2;
      }
      if ((uVar9 & 1) == 0) {
        return bVar7;
      }
      if (*(long *)(lVar4 + 0xf9f8) == 0) {
        return bVar7;
      }
      puVar11 = *(undefined8 **)(*(long *)(lVar4 + 0xf9f8) + 0x18);
      if (puVar11 == (undefined8 *)0x0) {
        return bVar7;
      }
      (**(code **)*puVar11)();
      return bVar7;
    }
  }
  return false;
}

