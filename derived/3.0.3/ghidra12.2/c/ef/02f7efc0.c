
bool FUN_02f7efc0(long *param_1,byte *param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  byte local_24 [4];
  
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar5 == 0) {
    bVar3 = false;
  }
  else {
    if ((*(long **)(lVar5 + 0x184e0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x184e0), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    lVar1 = *(long *)(lVar5 + 0x184c8) + *(long *)(lVar5 + 0x184c0);
    if (((((((*param_1 == *(long *)(lVar1 + 0x2306e) && param_1[1] == *(long *)(lVar1 + 0x23076)) &&
            param_1[2] == *(long *)(lVar1 + 0x2307e)) && param_1[3] == *(long *)(lVar1 + 0x23086))
          && param_1[4] == *(long *)(lVar1 + 0x2308e)) && param_1[5] == *(long *)(lVar1 + 0x23096))
        && param_1[6] == *(long *)(lVar1 + 0x2309e)) && param_1[7] == *(long *)(lVar1 + 0x230a6)) {
      uVar8 = 0;
      uVar7 = 0;
      do {
        iVar2 = *(int *)(lVar1 + 0x14 + uVar8);
        uVar8 = uVar8 + 4;
        uVar7 = (iVar2 * 0x16a88000 | (uint)(iVar2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar7;
        uVar7 = (uVar7 >> 0x13 | uVar7 << 0xd) * 5 + 0xe6546b64;
      } while (uVar8 < 0x22ffd);
      uVar7 = (uVar7 ^ 0x23000 ^ (uVar7 ^ 0x23000) >> 0x10) * -0x7a143595;
      uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
      bVar3 = (uVar7 ^ uVar7 >> 0x10) != *(uint *)(param_1 + 8);
    }
    else {
      bVar3 = true;
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x184e0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x184e0) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return bVar3;
}

