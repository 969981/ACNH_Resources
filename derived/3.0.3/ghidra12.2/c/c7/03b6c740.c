
undefined8 FUN_03b6c740(long param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 local_4a;
  uint uStack_48;
  char cStack_44;
  undefined1 uStack_43;
  
  uStack_48 = 0;
  cStack_44 = 0;
  uStack_43 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_4c = 0;
  local_4a = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  bVar8 = false;
  if (*(int *)(param_1 + 0x9c) != 0) {
    bVar8 = *(int *)(param_1 + 0x98) != 0;
  }
  bVar7 = false;
  if (*(char *)(param_1 + 0xac) != '\0') {
    bVar7 = bVar8;
  }
  if (*(char *)(param_1 + 0xf9) == '\0') {
    cVar5 = *(char *)(param_1 + 0xf8);
    if ((*(int *)(param_1 + 0x98) == 2) || (*(int *)(param_1 + 0x98) == 1)) {
      plVar13 = (long *)(param_1 + 0x50);
      iVar4 = *(int *)(param_1 + 0x9c);
    }
    else {
      plVar13 = (long *)0x0;
      iVar4 = *(int *)(param_1 + 0x9c);
    }
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x98) != 0)) {
      bVar8 = false;
      if ((*(int *)(param_1 + 0x9c) != 0) && (bVar8 = false, *(int *)(param_1 + 0x98) != 0)) {
        if (*(char *)(param_1 + 0x5c) != '\0') {
          return 0;
        }
        bVar8 = (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0)) <=
                *(uint *)(param_1 + 0xa8);
      }
      if (plVar13 == (long *)0x0) {
        return 0;
      }
      if (bVar8) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa0);
      (**(code **)(*plVar13 + 0x20))(plVar13);
      uVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_60,iVar4);
      if ((uVar9 & 1) != 0) {
        bVar8 = *(uint *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) <= uStack_48;
        uStack_43 = *(uint *)(param_1 + 0xa4) <= uStack_48 + iVar4;
        cStack_44 = bVar8;
        if (*(char *)(param_1 + 0xac) != '\0') {
          *(undefined1 *)(param_1 + 0xac) = 0;
          plVar13 = (long *)(param_1 + 0x78);
          if (*(int *)(param_1 + 0x9c) != 1) {
            plVar13 = (long *)0x0;
          }
          if (((cVar5 != '\0') && (*(int *)(param_1 + 0x9c) == 1)) &&
             (*(long *)(param_1 + 0xb0) != 0)) {
            local_70 = *(long *)(param_1 + 0xb0);
            (**(code **)(*plVar13 + 0x10))(plVar13,&local_70,iVar4);
            bVar8 = cStack_44 != '\0';
          }
        }
        uVar1 = *(int *)(param_1 + 0xa8) + uStack_48;
        *(undefined1 *)(param_1 + 0xf8) = 1;
        lVar10 = *(long *)(param_1 + 0x38);
        *(uint *)(param_1 + 0xa8) = uVar1;
        bVar2 = false;
        if (*(long *)(lVar10 + 8) == lVar10) {
          bVar2 = bVar8;
        }
        *(bool *)(param_1 + 0xf9) = bVar2;
        if (bVar7) {
          bVar6 = *(byte *)(param_1 + 0xb8);
          if (*(char *)(param_1 + (ulong)((bVar6 + 4) % 5) * 0xc + 0xc4) == '\0') {
            lVar12 = param_1 + (ulong)(uint)bVar6 * 0xc;
            *(undefined4 *)(lVar12 + 0xbc) = *(undefined4 *)(lVar10 + 0x10);
            *(undefined4 *)(lVar12 + 0xc0) = *(undefined4 *)(lVar10 + 0x14);
            lVar11 = *(long *)(lVar10 + 8);
            *(undefined1 *)(lVar12 + 0xc5) = 1;
            *(bool *)(lVar12 + 0xc4) = lVar11 == lVar10;
            *(byte *)(param_1 + 0xb8) = (byte)(bVar6 + 1) % 5;
          }
        }
        if (((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0x98) != 0)) &&
           ((*(char *)(param_1 + 0x5c) != '\0' ||
            ((uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0)) <= uVar1)))) {
          lVar10 = *(long *)(lVar10 + 8);
          *(long *)(param_1 + 0x38) = lVar10;
          if (((*(int *)(param_1 + 0x9c) != 0) && (lVar10 != 0)) && (*(int *)(param_1 + 0x98) != 0))
          {
            *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(lVar10 + 0x10);
            *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(lVar10 + 0x14);
            *(undefined4 *)(param_1 + 0xa8) = 0;
            *(undefined1 *)(param_1 + 0xac) = 1;
            if (*(int *)(param_1 + 0x98) - 1U < 2) {
              (**(code **)(*(long *)(param_1 + 0x50) + 0x18))((long *)(param_1 + 0x50));
            }
          }
        }
        *(undefined1 *)((long)param_2 + 0x19) = 0;
        *(bool *)(param_2 + 3) = bVar2;
        *param_2 = local_60;
        param_2[1] = local_58;
        *(undefined4 *)(param_2 + 2) = local_50;
        *(uint *)((long)param_2 + 0x14) = CONCAT22(local_4a,uStack_4c);
        uVar3 = 0;
        if (local_70 != 0) {
          uVar3 = local_68;
        }
        param_2[4] = local_70;
        param_2[5] = uVar3;
        return 1;
      }
    }
  }
  return 0;
}

