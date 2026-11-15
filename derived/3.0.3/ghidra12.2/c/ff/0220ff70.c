
undefined8 FUN_0220ff70(long param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  int iVar12;
  byte *pbVar13;
  undefined *local_80;
  char *local_78;
  undefined4 local_70;
  char local_6c [7];
  undefined1 local_65;
  
  puVar7 = PTR_DAT_04bc2a20;
  puVar6 = PTR_DAT_04bc27f0;
  puVar5 = PTR_DAT_04bb9e38;
  local_65 = 0;
  local_6c[0] = '\0';
  local_70 = 8;
  iVar12 = 0;
  local_78 = local_6c;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  do {
    pbVar1 = (byte *)(param_1 + (long)iVar12 + (long)iVar12 * 2);
    uVar8 = (ulong)*pbVar1;
    if (uVar8 < 0x23) {
      pbVar13 = (byte *)(param_1 + (long)iVar12 * 3 + 1);
      bVar2 = *pbVar13;
      if ((bVar2 <= (byte)puVar6[uVar8]) &&
         ((*(uint *)(puVar7 + uVar8 * 4) >> (ulong)(bVar2 & 0x1f) & 1) != 0)) {
        FUN_038d1270(&local_80,"-----");
        uVar8 = (ulong)*pbVar1;
        if (uVar8 < 0x23) {
          FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(puVar5 + uVar8 * 8 + 0xb0),*pbVar13);
        }
        (**(code **)(local_80 + 0x18))(&local_80);
        (**(code **)(local_80 + 0x18))(&local_80);
        pcVar10 = local_78;
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar9 = (char *)param_2[1];
        if (pcVar10 == pcVar9) {
          return 1;
        }
        if (*local_78 == *pcVar9) {
          if (*local_78 == '\0') {
            return 1;
          }
          lVar11 = 0x7fffe;
          pcVar10 = local_78;
          while( true ) {
            if (pcVar10[1] != pcVar9[1]) break;
            if (pcVar10[1] == '\0') {
              return 1;
            }
            if (pcVar10[2] != pcVar9[2]) break;
            if (pcVar10[2] == '\0') {
              return 1;
            }
            if ((lVar11 == 0) || (cVar3 = pcVar10[3], cVar3 != pcVar9[3])) break;
            lVar11 = lVar11 + -3;
            pcVar9 = pcVar9 + 3;
            pcVar10 = pcVar10 + 3;
            if (cVar3 == '\0') {
              return 1;
            }
          }
        }
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 9);
  uVar8 = (ulong)*(byte *)(param_1 + 0x1b);
  if (((uVar8 < 0x23) && (*(byte *)(param_1 + 0x1c) <= (byte)puVar6[uVar8])) &&
     ((*(uint *)(puVar7 + uVar8 * 4) >> (ulong)(*(byte *)(param_1 + 0x1c) & 0x1f) & 1) != 0)) {
    FUN_038d1270(&local_80,"-----");
    if ((ulong)*(byte *)(param_1 + 0x1b) < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",
                   *(undefined8 *)(puVar5 + (ulong)*(byte *)(param_1 + 0x1b) * 8 + 0xb0),
                   *(undefined1 *)(param_1 + 0x1c));
    }
    (**(code **)(local_80 + 0x18))(&local_80);
    (**(code **)(local_80 + 0x18))(&local_80);
    pcVar10 = local_78;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar9 = (char *)param_2[1];
    if (pcVar10 == pcVar9) {
      return 1;
    }
    if (*local_78 == *pcVar9) {
      if (*local_78 == '\0') {
        return 1;
      }
      lVar11 = 0;
      while ((lVar11 != 0x80000 && (local_78[lVar11 + 1] == pcVar9[lVar11 + 1]))) {
        if (local_78[lVar11 + 1] == '\0') {
          return 1;
        }
        lVar4 = lVar11 + 2;
        if (local_78[lVar4] != pcVar9[lVar11 + 2]) break;
        lVar11 = lVar11 + 2;
        if (local_78[lVar4] == '\0') {
          return 1;
        }
      }
    }
  }
  uVar8 = (ulong)*(byte *)(param_1 + 0x1e);
  if (((uVar8 < 0x23) && (*(byte *)(param_1 + 0x1f) <= (byte)puVar6[uVar8])) &&
     ((*(uint *)(puVar7 + uVar8 * 4) >> (ulong)(*(byte *)(param_1 + 0x1f) & 0x1f) & 1) != 0)) {
    FUN_038d1270(&local_80,"-----");
    if ((ulong)*(byte *)(param_1 + 0x1e) < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",
                   *(undefined8 *)(puVar5 + (ulong)*(byte *)(param_1 + 0x1e) * 8 + 0xb0),
                   *(undefined1 *)(param_1 + 0x1f));
    }
    (**(code **)(local_80 + 0x18))(&local_80);
    (**(code **)(local_80 + 0x18))(&local_80);
    pcVar10 = local_78;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar9 = (char *)param_2[1];
    if (pcVar10 == pcVar9) {
      return 1;
    }
    if (*local_78 == *pcVar9) {
      if (*local_78 == '\0') {
        return 1;
      }
      lVar11 = 0;
      while ((lVar11 != 0x80000 && (local_78[lVar11 + 1] == pcVar9[lVar11 + 1]))) {
        if (local_78[lVar11 + 1] == '\0') {
          return 1;
        }
        lVar4 = lVar11 + 2;
        if (local_78[lVar4] != pcVar9[lVar11 + 2]) break;
        lVar11 = lVar11 + 2;
        if (local_78[lVar4] == '\0') {
          return 1;
        }
      }
    }
  }
  uVar8 = (ulong)*(byte *)(param_1 + 0x21);
  if (((uVar8 < 0x23) && (*(byte *)(param_1 + 0x22) <= (byte)puVar6[uVar8])) &&
     ((*(uint *)(puVar7 + uVar8 * 4) >> (ulong)(*(byte *)(param_1 + 0x22) & 0x1f) & 1) != 0)) {
    FUN_038d1270(&local_80,"-----");
    if ((ulong)*(byte *)(param_1 + 0x21) < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",
                   *(undefined8 *)(puVar5 + (ulong)*(byte *)(param_1 + 0x21) * 8 + 0xb0),
                   *(undefined1 *)(param_1 + 0x22));
    }
    (**(code **)(local_80 + 0x18))(&local_80);
    (**(code **)(local_80 + 0x18))(&local_80);
    pcVar10 = local_78;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar9 = (char *)param_2[1];
    if (pcVar10 == pcVar9) {
      return 1;
    }
    if (*local_78 == *pcVar9) {
      if (*local_78 == '\0') {
        return 1;
      }
      lVar11 = 0;
      while ((lVar11 != 0x80000 && (local_78[lVar11 + 1] == pcVar9[lVar11 + 1]))) {
        if (local_78[lVar11 + 1] == '\0') {
          return 1;
        }
        lVar4 = lVar11 + 2;
        if (local_78[lVar4] != pcVar9[lVar11 + 2]) break;
        lVar11 = lVar11 + 2;
        if (local_78[lVar4] == '\0') {
          return 1;
        }
      }
    }
  }
  uVar8 = (ulong)*(byte *)(param_1 + 0x24);
  if (((uVar8 < 0x23) && (*(byte *)(param_1 + 0x25) <= (byte)puVar6[uVar8])) &&
     ((*(uint *)(puVar7 + uVar8 * 4) >> (ulong)(*(byte *)(param_1 + 0x25) & 0x1f) & 1) != 0)) {
    FUN_038d1270(&local_80,"-----");
    if ((ulong)*(byte *)(param_1 + 0x24) < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",
                   *(undefined8 *)(puVar5 + (ulong)*(byte *)(param_1 + 0x24) * 8 + 0xb0),
                   *(undefined1 *)(param_1 + 0x25));
    }
    (**(code **)(local_80 + 0x18))(&local_80);
    (**(code **)(local_80 + 0x18))(&local_80);
    pcVar10 = local_78;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar9 = (char *)param_2[1];
    if (pcVar10 == pcVar9) {
      return 1;
    }
    if (*local_78 == *pcVar9) {
      if (*local_78 == '\0') {
        return 1;
      }
      lVar11 = 0;
      while ((lVar11 != 0x80000 && (local_78[lVar11 + 1] == pcVar9[lVar11 + 1]))) {
        if (local_78[lVar11 + 1] == '\0') {
          return 1;
        }
        lVar4 = lVar11 + 2;
        if (local_78[lVar4] != pcVar9[lVar11 + 2]) break;
        lVar11 = lVar11 + 2;
        if (local_78[lVar4] == '\0') {
          return 1;
        }
      }
    }
  }
  uVar8 = (ulong)*(byte *)(param_1 + 0x27);
  if (((uVar8 < 0x23) && (*(byte *)(param_1 + 0x28) <= (byte)puVar6[uVar8])) &&
     ((*(uint *)(puVar7 + uVar8 * 4) >> (ulong)(*(byte *)(param_1 + 0x28) & 0x1f) & 1) != 0)) {
    FUN_038d1270(&local_80,"-----");
    if ((ulong)*(byte *)(param_1 + 0x27) < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",
                   *(undefined8 *)(puVar5 + (ulong)*(byte *)(param_1 + 0x27) * 8 + 0xb0),
                   *(undefined1 *)(param_1 + 0x28));
    }
    (**(code **)(local_80 + 0x18))(&local_80);
    (**(code **)(local_80 + 0x18))(&local_80);
    pcVar10 = local_78;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar9 = (char *)param_2[1];
    if (pcVar10 == pcVar9) {
      return 1;
    }
    if (*local_78 == *pcVar9) {
      if (*local_78 == '\0') {
        return 1;
      }
      lVar11 = 0;
      while ((lVar11 != 0x80000 && (local_78[lVar11 + 1] == pcVar9[lVar11 + 1]))) {
        if (local_78[lVar11 + 1] == '\0') {
          return 1;
        }
        lVar4 = lVar11 + 2;
        if (local_78[lVar4] != pcVar9[lVar11 + 2]) break;
        lVar11 = lVar11 + 2;
        if (local_78[lVar4] == '\0') {
          return 1;
        }
      }
    }
  }
  uVar8 = (ulong)*(byte *)(param_1 + 0x2a);
  if (((uVar8 < 0x23) && (*(byte *)(param_1 + 0x2b) <= (byte)puVar6[uVar8])) &&
     ((*(uint *)(puVar7 + uVar8 * 4) >> (ulong)(*(byte *)(param_1 + 0x2b) & 0x1f) & 1) != 0)) {
    FUN_038d1270(&local_80,"-----");
    if ((ulong)*(byte *)(param_1 + 0x2a) < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",
                   *(undefined8 *)(puVar5 + (ulong)*(byte *)(param_1 + 0x2a) * 8 + 0xb0),
                   *(undefined1 *)(param_1 + 0x2b));
    }
    (**(code **)(local_80 + 0x18))(&local_80);
    (**(code **)(local_80 + 0x18))(&local_80);
    pcVar10 = local_78;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar9 = (char *)param_2[1];
    if (pcVar10 == pcVar9) {
      return 1;
    }
    if (*local_78 == *pcVar9) {
      if (*local_78 == '\0') {
        return 1;
      }
      lVar11 = 0;
      while ((lVar11 != 0x80000 && (local_78[lVar11 + 1] == pcVar9[lVar11 + 1]))) {
        if (local_78[lVar11 + 1] == '\0') {
          return 1;
        }
        lVar4 = lVar11 + 2;
        if (local_78[lVar4] != pcVar9[lVar11 + 2]) {
          return 0;
        }
        lVar11 = lVar11 + 2;
        if (local_78[lVar4] == '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}

