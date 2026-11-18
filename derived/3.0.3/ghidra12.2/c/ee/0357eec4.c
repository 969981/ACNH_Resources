
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0357eec4(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  FUN_0357f340(param_1 + 0x340);
  lVar3 = FUN_033d0598(&DAT_0548e140);
  iVar7 = *(int *)(lVar3 + 0x390);
  if (DAT_05771228 == iVar7) {
    lVar4 = 0;
  }
  else if (DAT_05771298 == iVar7) {
    lVar4 = 1;
  }
  else if (DAT_05771308 == iVar7) {
    lVar4 = 2;
  }
  else if (DAT_05771378 == iVar7) {
    lVar4 = 3;
  }
  else if (DAT_057713e8 == iVar7) {
    lVar4 = 4;
  }
  else if (DAT_05771458 == iVar7) {
    lVar4 = 5;
  }
  else if (DAT_057714c8 == iVar7) {
    lVar4 = 6;
  }
  else if (DAT_05771538 == iVar7) {
    lVar4 = 7;
  }
  else if (DAT_057715a8 == iVar7) {
    lVar4 = 8;
  }
  else if (DAT_05771618 == iVar7) {
    lVar4 = 9;
  }
  else if (DAT_05771688 == iVar7) {
    lVar4 = 10;
  }
  else {
    if (*(int *)(param_1 + 0x358) < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)**(undefined8 **)(param_1 + 0x360);
    }
    if (DAT_05771764 == iVar7) {
      lVar4 = 0;
    }
    else if (_DAT_0577176c == iVar7) {
      lVar4 = 1;
    }
    else if (_DAT_05771774 == iVar7) {
      lVar4 = 2;
    }
    else if (_DAT_0577177c == iVar7) {
      lVar4 = 3;
    }
    else if (_DAT_05771784 == iVar7) {
      lVar4 = 4;
    }
    else if (_DAT_0577178c == iVar7) {
      lVar4 = 5;
    }
    else if (_DAT_05771794 == iVar7) {
      lVar4 = 6;
    }
    else if (_DAT_0577179c == iVar7) {
      lVar4 = 7;
    }
    else if (_DAT_057717a4 == iVar7) {
      lVar4 = 8;
    }
    else {
      if (_DAT_057717ac != iVar7) {
        if (_DAT_057717b4 == iVar7) {
          lVar4 = 10;
          iVar7 = DAT_05771688;
        }
        else {
          lVar4 = 0xffffffff;
          iVar7 = DAT_05771228;
        }
        goto LAB_0357f170;
      }
      lVar4 = 9;
    }
    iVar7 = (&DAT_05771228)[lVar4 * 0x1c];
  }
LAB_0357f170:
  if (DAT_05771760 == iVar7) {
    uVar6 = 0;
  }
  else if (DAT_05771768 == iVar7) {
    uVar6 = 1;
  }
  else if (DAT_05771770 == iVar7) {
    uVar6 = 2;
  }
  else if (DAT_05771778 == iVar7) {
    uVar6 = 3;
  }
  else if (DAT_05771780 == iVar7) {
    uVar6 = 4;
  }
  else if (DAT_05771788 == iVar7) {
    uVar6 = 5;
  }
  else if (DAT_05771790 == iVar7) {
    uVar6 = 6;
  }
  else if (DAT_05771798 == iVar7) {
    uVar6 = 7;
  }
  else if (DAT_057717a0 == iVar7) {
    uVar6 = 8;
  }
  else if (DAT_057717a8 == iVar7) {
    uVar6 = 9;
  }
  else {
    if (DAT_057717b0 != iVar7) goto LAB_0357f2ac;
    uVar6 = 10;
  }
  *(undefined2 *)(param_1 + 0x350) = uVar6;
LAB_0357f2ac:
  puVar1 = (uint *)(lVar3 + 0x338) + lVar4 * 2;
  if (10 < (uint)lVar4) {
    puVar1 = (uint *)(lVar3 + 0x338);
  }
  uVar2 = *puVar1;
  if ((int)uVar2 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar8 = (uint)*(ushort *)(param_1 + 0x350);
    if (*(uint *)(param_1 + 0x340) <= (uint)*(ushort *)(param_1 + 0x350)) {
      uVar8 = 0;
    }
    piVar9 = (int *)(*(long *)(param_1 + 0x348) + (ulong)uVar8 * 0x160);
    if ((int)uVar2 < *piVar9) {
      uVar5 = **(undefined4 **)(*(long *)(piVar9 + 2) + (ulong)uVar2 * 8);
    }
  }
  return uVar5;
}

