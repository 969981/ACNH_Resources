
undefined4 FUN_03ecf770(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  if (0 < (int)*(uint *)(param_1 + 0x138)) {
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      if (*(uint *)(param_1 + 0x128) <= uVar7) {
        uVar8 = 0;
      }
      puVar1 = (uint *)(*(long *)(param_1 + 0x130) + (ulong)uVar8 * 0x20);
      if (*(long *)(puVar1 + 6) == param_2) {
LAB_03ecf840:
        if (0 < (int)puVar1[4]) {
          uVar8 = 0;
          do {
            uVar3 = uVar8;
            if (*puVar1 <= uVar8) {
              uVar3 = 0;
            }
            lVar6 = *(long *)(*(long *)(puVar1 + 2) + (ulong)uVar3 * 0x10);
            if (lVar6 == param_3) {
LAB_03ecf8ec:
              return *(undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar3 * 0x10 + 8);
            }
            uVar9 = 0;
            bVar5 = true;
            do {
              lVar2 = param_3 + 2 + uVar9;
              cVar4 = *(char *)(lVar2 + -2);
              if (cVar4 != *(char *)(lVar6 + uVar9)) break;
              if (cVar4 == '\0') {
                if (bVar5) goto LAB_03ecf8ec;
                break;
              }
              cVar4 = *(char *)(lVar2 + -1);
              if (cVar4 != *(char *)(lVar6 + uVar9 + 1)) break;
              if (cVar4 == '\0') goto LAB_03ecf8ec;
              cVar4 = *(char *)(param_3 + 2 + uVar9);
              if (cVar4 != *(char *)(lVar6 + uVar9 + 2)) break;
              if (cVar4 == '\0') goto LAB_03ecf8ec;
              bVar5 = uVar9 < 0x7fffe;
              uVar9 = uVar9 + 3;
            } while (uVar9 != 0x80001);
            uVar8 = uVar8 + 1;
          } while (uVar8 != puVar1[4]);
        }
      }
      else {
        uVar9 = 0;
        lVar6 = *(long *)(puVar1 + 6) + 2;
        bVar5 = true;
        do {
          lVar2 = lVar6 + uVar9;
          cVar4 = *(char *)(lVar2 + -2);
          if (cVar4 != *(char *)(param_2 + uVar9)) break;
          if (cVar4 == '\0') {
            if (bVar5) goto LAB_03ecf840;
            break;
          }
          cVar4 = *(char *)(lVar2 + -1);
          if (cVar4 != *(char *)(param_2 + uVar9 + 1)) break;
          if (cVar4 == '\0') goto LAB_03ecf840;
          cVar4 = *(char *)(lVar6 + uVar9);
          if (cVar4 != *(char *)(param_2 + uVar9 + 2)) break;
          if (cVar4 == '\0') goto LAB_03ecf840;
          bVar5 = uVar9 < 0x7fffe;
          uVar9 = uVar9 + 3;
        } while (uVar9 != 0x80001);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != *(uint *)(param_1 + 0x138));
  }
  local_35 = 0;
  local_138 = 0x100;
  puStack_140 = local_134;
  local_134[0] = 0;
  local_148 = PTR_DAT_04bb21f8 + 0x10;
  FUN_038d1270(&local_148,"%s.as",param_4);
  return 0;
}

