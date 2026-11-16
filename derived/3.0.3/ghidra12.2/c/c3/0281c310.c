
void FUN_0281c310(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  if (DAT_05574040 == 0) {
    return;
  }
  lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar4 == 0) {
    return;
  }
  plVar9 = (long *)(lVar4 + 0x27f618);
  lVar8 = *(long *)(lVar4 + 0x27f638);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar4 + 0x27f638) == 0) goto LAB_0281c3c8;
      plVar6 = *(long **)(*(long *)(lVar4 + 0x27f638) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_58 = *plVar9;
      local_50 = *(long *)(lVar4 + 0x27f620);
      local_48 = 0x10;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    }
  }
LAB_0281c3c8:
  lVar8 = *plVar9;
  lVar10 = *(long *)(lVar4 + 0x27f620);
  puVar7 = (undefined8 *)(lVar10 + lVar8);
  if (*(byte *)(puVar7 + 1) < 8) {
    if ((*(long *)(lVar4 + 0x27f638) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar4 + 0x27f638) + 0x20), plVar6 != (long *)0x0)) {
      local_48 = 0x10;
      local_58 = lVar8;
      local_50 = lVar10;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      lVar8 = *plVar9;
      lVar10 = *(long *)(lVar4 + 0x27f620);
      puVar7 = (undefined8 *)(lVar10 + lVar8);
    }
    bVar1 = *(byte *)(puVar7 + 1);
    if ((bVar1 < 8) && (*param_1 != 0)) {
      iVar11 = 0;
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + (long)iVar11 * 0x3c + 0x38) == (int)(char)bVar1) {
          if ((*(long *)(lVar4 + 0x27f638) != 0) &&
             (plVar6 = *(long **)(*(long *)(lVar4 + 0x27f638) + 0x20), plVar6 != (long *)0x0)) {
            local_48 = 0x10;
            local_58 = lVar8;
            local_50 = lVar10;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
            puVar7 = (undefined8 *)(*(long *)(lVar4 + 0x27f620) + *plVar9);
          }
          *puVar7 = 0;
          *(undefined1 *)(puVar7 + 1) = 0xff;
          if (DAT_05574040 == 0) break;
          puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar8 = (**(code **)(*(long *)*puVar7 + 0x38))();
            if (lVar8 == 0) break;
            lVar8 = lVar8 + 0x70;
          }
          else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
                  (lVar8 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar8 == 0)) break;
          if ((*(long **)(lVar8 + 0xe7140) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(lVar8 + 0xe7140), puVar7 == (undefined8 *)0x0)) {
            uVar3 = 1;
          }
          else {
            uVar3 = (**(code **)*puVar7)();
            uVar3 = uVar3 ^ 1;
          }
          plVar9 = (long *)(*(long *)(lVar8 + 0xe7128) + *(long *)(lVar8 + 0xe7120) +
                           (ulong)(uint)(int)(char)bVar1 * 0x48);
          if (*plVar9 != 0 || plVar9[1] != 0) {
            plVar6 = &DAT_0417bad0;
            if (*plVar9 != 0 || plVar9[1] != 0) {
              plVar6 = plVar9;
            }
            local_58 = *plVar6;
            local_50 = plVar6[1];
            if ((local_58 != 0 || local_50 != 0) &&
               (cVar2 = FUN_006b7b00(&local_58), cVar2 == '\x01')) {
              FUN_006b7b50(&local_58,0);
            }
          }
          if ((((uVar3 & 1) == 0) && (*(long *)(lVar8 + 0xe7140) != 0)) &&
             (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0xe7140) + 8), puVar7 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar7)();
          }
          break;
        }
        iVar11 = iVar11 + 1;
      } while (*param_1 != iVar11);
    }
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x27f638) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x27f638) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

