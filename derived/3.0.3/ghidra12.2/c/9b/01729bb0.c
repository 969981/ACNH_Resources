
void FUN_01729bb0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 local_38;
  undefined1 local_36;
  char local_35;
  int local_34;
  
  uVar5 = *(ulong *)(param_1 + 600);
  if (uVar5 != 0) {
    uVar3 = (uint)(uVar5 >> 0x20);
    uVar6 = (int)uVar5 - ((uint)(uVar5 >> 1) & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar2 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    if ((uVar6 + (uVar6 >> 0x10) & 0x3f) + (uVar2 + (uVar2 >> 0x10) & 0x3f) == 1) {
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        if (((uVar5 >> (uVar7 & 0x3f) & 1) != 0) ||
           (uVar8 = uVar7 + 1, (uVar5 >> (uVar8 & 0x3f) & 1) != 0)) {
          uVar6 = (uint)uVar8;
          if (0x27 < uVar6) {
            uVar6 = 0xffffffff;
          }
          goto LAB_01729c80;
        }
        uVar7 = uVar7 + 2;
      } while (uVar7 != 0x40);
    }
    uVar6 = DAT_0559bc2c;
LAB_01729c80:
    lVar1 = param_1 + 0x188;
    puVar4 = (undefined2 *)FUN_02677ea0(lVar1,uVar6);
    local_38 = *puVar4;
    local_36 = *(undefined1 *)(puVar4 + 1);
    local_35 = *(char *)((long)puVar4 + 3);
    local_34 = *(int *)(puVar4 + 2);
    uVar5 = FUN_0277d7b4(&local_38,param_1 + 0x228);
    if ((((uVar5 & 1) == 0) || (local_35 != *(char *)(param_1 + 0x22b))) ||
       (local_34 != *(int *)(param_1 + 0x22c))) {
      FUN_02675b70(lVar1,uVar6);
      FUN_02674700(lVar1,uVar6,param_1 + 0x228,1,0);
    }
    *(undefined8 *)(param_1 + 600) = 0;
  }
  return;
}

