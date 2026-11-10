
/* WARNING: Type propagation algorithm not settling */

void FUN_0021b430(long *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((short)param_1[0xc] == 0) {
    local_68 = 0;
    local_70 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_70);
    lVar6 = param_1[10];
  }
  else {
    lVar6 = param_1[10];
  }
  if (lVar6 == 0) {
    local_68 = 0;
    local_70 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_70);
    lVar6 = param_1[0xb];
  }
  else {
    lVar6 = param_1[0xb];
  }
  if (lVar6 == 0) {
    local_68 = 0;
    local_70 = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_70);
    uVar4 = *(ushort *)(param_1 + 0xc);
  }
  else {
    uVar4 = *(ushort *)(param_1 + 0xc);
  }
  if (1 < uVar4) {
    uVar9 = 0;
    do {
      uVar8 = (uint)uVar9;
      if (param_1[0x13] == 0) {
        local_70 = 0x800000000000000;
        local_68 = 0;
        (**(code **)(*param_1 + 0x10))(param_1,&local_70);
        lVar6 = *(long *)(param_1[10] + (uVar9 & 0xffff) * 0x30 + 0x10);
      }
      else {
        lVar6 = *(long *)(param_1[10] + (uVar9 & 0xffff) * 0x30 + 0x10);
      }
      if (lVar6 == 0) {
        uVar9 = uVar9 & 0xffff;
        lVar6 = *(long *)(param_1[0x13] + uVar9 * 0x10);
        if (lVar6 != 0) {
          lVar7 = param_1[0xb];
          uVar5 = FUN_002aaa44(param_1);
          uVar3 = uVar8;
          if ((uVar5 & 0xff) <= (uVar8 & 0xffff)) {
            uVar3 = uVar8 + 1;
          }
          FUN_002ae400(&local_70,lVar7,lVar6,uVar3);
          if ((int)local_70 != 0) {
            local_7c = 0x800000000000000;
            local_74 = 0;
            (**(code **)(*param_1 + 0x10))(param_1,&local_7c);
          }
          lVar6 = param_1[10];
          lVar7 = lVar6 + uVar9 * 0x30;
          *(undefined4 *)(lVar7 + 0x1c) = 0;
          *(undefined4 *)(lVar7 + 1) = 0;
          memset((void *)(lVar7 + 8),0xff,4);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined4 *)(lVar7 + 0x18) = 0;
          if (*(ushort *)(lVar7 + 0x20) != 0) {
            uVar11 = 0;
            lVar10 = 0x5aa;
            do {
              puVar1 = (undefined1 *)(*(long *)(lVar6 + uVar9 * 0x30 + 0x28) + lVar10);
              *(undefined2 *)(puVar1 + -0x5aa) = 0;
              memset(puVar1 + -0x5a8,0,0x5a0);
              *(undefined4 *)(puVar1 + -6) = 0;
              uVar11 = uVar11 + 1;
              lVar10 = lVar10 + 0x5ac;
              *(undefined2 *)(puVar1 + -2) = 0;
              *puVar1 = 0;
            } while (uVar11 < *(ushort *)(lVar7 + 0x20));
          }
          lVar6 = lVar6 + uVar9 * 0x30;
          *(undefined4 *)(lVar6 + 0x22) = 0;
          *(undefined1 *)(lVar6 + 0x26) = 0;
          puVar2 = (undefined8 *)(param_1[0x13] + uVar9 * 0x10);
          lVar6 = param_1[10] + uVar9 * 0x30;
          *(undefined8 *)(lVar6 + 0x10) = *puVar2;
          *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(puVar2 + 1);
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          if (*(int *)((long)param_1 + 0x6c) == 2) {
            *(undefined1 *)((long)param_1 + 0x76) = 1;
          }
          local_7c = 0x800000000000000;
          local_74 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_7c);
        }
      }
      uVar9 = (ulong)(uVar8 + 1);
    } while ((int)(uVar8 + 1 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
  }
  return;
}

