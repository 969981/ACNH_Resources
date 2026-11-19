
void FUN_039e4150(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  
  lVar10 = 0;
  cVar11 = '\0';
  bVar5 = false;
  bVar4 = false;
  do {
    if (bVar4) {
LAB_039e42bc:
      bVar4 = true;
      if (bVar5) goto LAB_039e41b0;
LAB_039e42e0:
      lVar1 = *(long *)(param_1 + 0x168) + lVar10 * 0x100;
      uVar2 = param_2;
      if (*(uint *)(param_1 + 0x610) <= param_2) {
        uVar2 = 0;
      }
      lVar7 = *(long *)(param_1 + 0x618) + (long)(int)uVar2 * 0x168;
      (**(code **)(*(long *)(lVar1 + 0x700) + 0x18))(lVar1 + 0x700);
      (**(code **)(*(long *)(lVar1 + 0x700) + 0x18))(lVar1 + 0x700);
      plVar8 = (long *)(lVar7 + 0xe8);
      lVar9 = *(long *)(lVar1 + 0x708);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar7 = *(long *)(lVar7 + 0xf0);
      if (lVar9 == lVar7) {
LAB_039e4194:
        uVar2 = param_2;
        if (*(uint *)(param_1 + 0x610) <= param_2) {
          uVar2 = 0;
        }
        *(char *)(*(long *)(param_1 + 0x618) + (long)(int)uVar2 * 0x168 + 0x161) = cVar11;
        goto LAB_039e41b0;
      }
      uVar6 = 0;
      bVar5 = true;
      lVar1 = *(long *)(lVar1 + 0x708) + 2;
      do {
        lVar9 = lVar1 + uVar6;
        cVar3 = *(char *)(lVar9 + -2);
        if (cVar3 != *(char *)(lVar7 + uVar6)) break;
        if (cVar3 == '\0') {
          if (bVar5) goto LAB_039e4194;
          break;
        }
        cVar3 = *(char *)(lVar9 + -1);
        if (cVar3 != *(char *)(lVar7 + uVar6 + 1)) break;
        if (cVar3 == '\0') goto LAB_039e4194;
        cVar3 = *(char *)(lVar1 + uVar6);
        if (cVar3 != *(char *)(lVar7 + uVar6 + 2)) break;
        if (cVar3 == '\0') goto LAB_039e4194;
        bVar5 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      bVar5 = false;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x168) + lVar10 * 0x100;
      uVar2 = param_2;
      if (*(uint *)(param_1 + 0x610) <= param_2) {
        uVar2 = 0;
      }
      lVar7 = *(long *)(param_1 + 0x618) + (long)(int)uVar2 * 0x168;
      (**(code **)(*(long *)(lVar1 + 0x700) + 0x18))(lVar1 + 0x700);
      (**(code **)(*(long *)(lVar1 + 0x700) + 0x18))(lVar1 + 0x700);
      plVar8 = (long *)(lVar7 + 0x98);
      lVar9 = *(long *)(lVar1 + 0x708);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar7 = *(long *)(lVar7 + 0xa0);
      if (lVar9 == lVar7) {
LAB_039e42a0:
        uVar2 = param_2;
        if (*(uint *)(param_1 + 0x610) <= param_2) {
          uVar2 = 0;
        }
        *(char *)(*(long *)(param_1 + 0x618) + (long)(int)uVar2 * 0x168 + 0x160) = cVar11;
        goto LAB_039e42bc;
      }
      uVar6 = 0;
      bVar4 = true;
      lVar1 = *(long *)(lVar1 + 0x708) + 2;
      do {
        lVar9 = lVar1 + uVar6;
        cVar3 = *(char *)(lVar9 + -2);
        if (cVar3 != *(char *)(lVar7 + uVar6)) break;
        if (cVar3 == '\0') {
          if (bVar4) goto LAB_039e42a0;
          break;
        }
        cVar3 = *(char *)(lVar9 + -1);
        if (cVar3 != *(char *)(lVar7 + uVar6 + 1)) break;
        if (cVar3 == '\0') goto LAB_039e42a0;
        cVar3 = *(char *)(lVar1 + uVar6);
        if (cVar3 != *(char *)(lVar7 + uVar6 + 2)) break;
        if (cVar3 == '\0') goto LAB_039e42a0;
        bVar4 = uVar6 < 0x7fffe;
        uVar6 = uVar6 + 3;
      } while (uVar6 != 0x80001);
      bVar4 = false;
      if (!bVar5) goto LAB_039e42e0;
LAB_039e41b0:
      bVar5 = true;
    }
    lVar10 = lVar10 + 1;
    cVar11 = cVar11 + '\x01';
    if (lVar10 == 0x20) {
      if (!bVar4) {
        uVar2 = param_2;
        if (*(uint *)(param_1 + 0x610) <= param_2) {
          uVar2 = 0;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x618) + (long)(int)uVar2 * 0x168 + 0x160) = 0xff;
      }
      if (!bVar5) {
        if (*(uint *)(param_1 + 0x610) <= param_2) {
          param_2 = 0;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x618) + (long)(int)param_2 * 0x168 + 0x161) = 0xff;
      }
      return;
    }
  } while( true );
}

