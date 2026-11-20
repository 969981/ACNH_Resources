
undefined4 FUN_03ecf580(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  lVar8 = 0x108;
  if ((param_3 & 1) == 0) {
    lVar8 = 0x120;
  }
  uVar4 = *(uint *)(param_1 + lVar8);
  if (0 < (int)uVar4) {
    uVar7 = 0;
    if ((param_3 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x118);
      do {
        uVar3 = uVar7;
        if (*(uint *)(param_1 + 0x110) <= uVar7) {
          uVar3 = 0;
        }
        uVar9 = (ulong)uVar3;
        lVar10 = *(long *)(lVar8 + uVar9 * 0x10);
        if (lVar10 == param_2) goto LAB_03ecf70c;
        uVar11 = 0;
        bVar6 = true;
        do {
          lVar1 = param_2 + 2 + uVar11;
          cVar5 = *(char *)(lVar1 + -2);
          if (cVar5 != *(char *)(lVar10 + uVar11)) break;
          if (cVar5 == '\0') {
            if (bVar6) goto LAB_03ecf70c;
            break;
          }
          cVar5 = *(char *)(lVar1 + -1);
          if (cVar5 != *(char *)(lVar10 + uVar11 + 1)) break;
          if (cVar5 == '\0') goto LAB_03ecf70c;
          cVar5 = *(char *)(param_2 + 2 + uVar11);
          if (cVar5 != *(char *)(lVar10 + uVar11 + 2)) break;
          if (cVar5 == '\0') goto LAB_03ecf70c;
          bVar6 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar4);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x100);
      do {
        uVar3 = uVar7;
        if (*(uint *)(param_1 + 0xf8) <= uVar7) {
          uVar3 = 0;
        }
        uVar9 = (ulong)uVar3;
        lVar10 = *(long *)(lVar8 + uVar9 * 0x10);
        if (lVar10 == param_2) {
LAB_03ecf70c:
          return *(undefined4 *)(lVar8 + uVar9 * 0x10 + 8);
        }
        uVar11 = 0;
        lVar10 = lVar10 + 1;
        bVar6 = true;
        do {
          lVar1 = param_2 + 1 + uVar11;
          lVar2 = lVar10 + uVar11;
          cVar5 = *(char *)(lVar1 + -1);
          if (cVar5 != *(char *)(lVar2 + -1)) break;
          if (cVar5 == '\0') {
            if (bVar6) goto LAB_03ecf70c;
            break;
          }
          cVar5 = *(char *)(param_2 + 1 + uVar11);
          if (cVar5 != *(char *)(lVar10 + uVar11)) break;
          if (cVar5 == '\0') goto LAB_03ecf70c;
          cVar5 = *(char *)(lVar1 + 1);
          if (cVar5 != *(char *)(lVar2 + 1)) break;
          if (cVar5 == '\0') goto LAB_03ecf70c;
          bVar6 = uVar11 < 0x7fffe;
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar4);
    }
  }
  local_25 = 0;
  local_128 = 0x100;
  puStack_130 = local_124;
  local_124[0] = 0;
  local_138 = PTR_DAT_04bb21f8 + 0x10;
  FUN_038d1270(&local_138,"%s.as",param_4);
  return 0;
}

