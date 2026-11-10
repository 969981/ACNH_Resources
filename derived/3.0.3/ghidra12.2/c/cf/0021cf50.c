
void FUN_0021cf50(long *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_6c;
  undefined4 local_64;
  
  switch(param_2) {
  case 0:
    if ((short)param_1[0x10] != 0) {
      local_64 = 0;
      local_6c = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
    }
    if (*(int *)((long)param_1 + 0x6c) != 3) {
      local_64 = 0;
      local_6c = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
    }
    *(undefined2 *)((long)param_1 + 0x74) = 0;
    *(undefined1 *)((long)param_1 + 0x76) = 0;
    if (1 < *(ushort *)(param_1 + 0xc)) {
      lVar9 = 0;
      do {
        lVar7 = param_1[10];
        if (lVar7 == 0) {
          local_64 = 0;
          local_6c = 0x800000000000000;
          (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
          lVar7 = param_1[10];
          cVar4 = *(char *)(lVar7 + lVar9 * 0x30 + 1);
        }
        else {
          cVar4 = *(char *)(lVar7 + lVar9 * 0x30 + 1);
        }
        if (cVar4 != '\0') {
          FUN_0021e650(param_1,*(undefined8 *)(lVar7 + lVar9 * 0x30 + 0x10));
          lVar7 = param_1[10];
        }
        lVar11 = lVar7 + lVar9 * 0x30;
        uVar2 = *(undefined4 *)(lVar11 + 0x18);
        iVar3 = *(int *)(lVar11 + 0x1c);
        lVar8 = *(long *)(lVar11 + 0x10);
        *(undefined4 *)(lVar11 + 0x1c) = 0;
        *(undefined4 *)(lVar11 + 1) = 0;
        memset((void *)(lVar11 + 8),0xff,4);
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (*(ushort *)(lVar11 + 0x20) != 0) {
          uVar5 = 0;
          lVar10 = 0x5aa;
          do {
            puVar1 = (undefined1 *)(*(long *)(lVar7 + lVar9 * 0x30 + 0x28) + lVar10);
            *(undefined2 *)(puVar1 + -0x5aa) = 0;
            memset(puVar1 + -0x5a8,0,0x5a0);
            *(undefined4 *)(puVar1 + -6) = 0;
            uVar5 = uVar5 + 1;
            lVar10 = lVar10 + 0x5ac;
            *(undefined2 *)(puVar1 + -2) = 0;
            *puVar1 = 0;
          } while (uVar5 < *(ushort *)(lVar11 + 0x20));
        }
        lVar10 = lVar9 * 0x30;
        *(undefined4 *)(lVar7 + lVar10 + 0x22) = 0;
        *(undefined1 *)(lVar7 + lVar10 + 0x26) = 0;
        lVar11 = param_1[10];
        lVar7 = lVar11 + lVar10;
        *(long *)(lVar7 + 0x10) = lVar8;
        *(undefined4 *)(lVar7 + 0x18) = uVar2;
        if ((lVar8 != 0) && (piVar6 = (int *)(lVar11 + lVar9 * 0x30 + 0x1c), *piVar6 != iVar3)) {
          *piVar6 = iVar3;
        }
        uVar5 = FUN_0021dde0(param_1,lVar8);
        if ((uVar5 & 1) == 0) {
          lVar7 = param_1[10];
          lVar8 = lVar7 + lVar9 * 0x30;
          *(undefined4 *)(lVar8 + 0x1c) = 0;
          *(undefined4 *)(lVar8 + 1) = 0;
          memset((void *)(lVar8 + 8),0xff,4);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          *(undefined4 *)(lVar8 + 0x18) = 0;
          if (*(ushort *)(lVar8 + 0x20) != 0) {
            uVar5 = 0;
            lVar11 = 0x5aa;
            do {
              puVar1 = (undefined1 *)(*(long *)(lVar7 + lVar9 * 0x30 + 0x28) + lVar11);
              *(undefined2 *)(puVar1 + -0x5aa) = 0;
              memset(puVar1 + -0x5a8,0,0x5a0);
              *(undefined4 *)(puVar1 + -6) = 0;
              uVar5 = uVar5 + 1;
              lVar11 = lVar11 + 0x5ac;
              *(undefined2 *)(puVar1 + -2) = 0;
              *puVar1 = 0;
            } while (uVar5 < *(ushort *)(lVar8 + 0x20));
          }
          *(undefined4 *)(lVar7 + lVar10 + 0x22) = 0;
          *(undefined1 *)(lVar7 + lVar10 + 0x26) = 0;
          *(undefined1 *)(param_1[10] + lVar10) = 0;
        }
        lVar9 = lVar9 + 1;
      } while ((int)((uint)lVar9 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
    }
    break;
  case 1:
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      local_64 = 0;
      local_6c = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
    }
    if (1 < *(ushort *)(param_1 + 0xc)) {
      lVar9 = 0;
      do {
        uVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar9 * 0x30);
        if ((uVar5 & 1) != 0) {
          lVar7 = param_1[10];
          if (lVar7 == 0) {
            local_6c = 0x800000000000000;
            local_64 = 0;
            (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
            lVar7 = param_1[10];
            lVar8 = *(long *)(lVar7 + lVar9 * 0x30 + 0x10);
          }
          else {
            lVar8 = *(long *)(lVar7 + lVar9 * 0x30 + 0x10);
          }
          if (lVar8 != 0) {
            if (*(char *)(lVar7 + lVar9 * 0x30 + 2) != '\0') {
              local_6c = 0x800000000000000;
              local_64 = 0;
              (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
              lVar7 = param_1[10];
            }
            if (*(int *)(lVar7 + lVar9 * 0x30 + 8) != -1) {
              local_6c = 0x800000000000000;
              local_64 = 0;
              (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)((uint)lVar9 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
    }
    break;
  case 2:
    if (1 < *(ushort *)(param_1 + 0x10)) {
      local_64 = 0;
      local_6c = 0x800000000000000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
    }
    if (*(int *)((long)param_1 + 0x6c) == 1) break;
  default:
    local_64 = 0;
    local_6c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_6c);
    break;
  case 3:
    break;
  }
  *(undefined4 *)((long)param_1 + 0x6c) = param_2;
  return;
}

