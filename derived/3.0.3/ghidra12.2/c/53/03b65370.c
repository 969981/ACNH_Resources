
void FUN_03b65370(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (((*(int *)(param_1 + 0x74) == 1) && ((*(byte *)(param_1 + 0x7f) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x7e) & 1) == 0)) {
    FUN_03b65450(param_1);
    if (*(char *)(param_1 + 0x7b) != '\0') {
      FUN_03b63c50(param_1);
    }
    if (*(long *)(param_1 + 0xf0) != param_1 + 0xe8) {
      lVar2 = (long)*(int *)(param_1 + 0xfc);
      lVar3 = *(long *)(param_1 + 0xf0) - lVar2;
      do {
        iVar1 = nn::audio::GetWaveBufferCount((VoiceType *)(lVar3 + 0x80));
        if (iVar1 != 0) {
          return;
        }
        if (((*(long *)(lVar3 + 200) != 0) && (*(char *)(lVar3 + 0x189) == '\0')) &&
           (*(char *)(lVar3 + 0xec) == '\0')) {
          return;
        }
        lVar3 = *(long *)(lVar3 + lVar2 + 8) - lVar2;
      } while (lVar3 != (param_1 + 0xe8) - (long)*(int *)(param_1 + 0xfc));
    }
    *(undefined1 *)(param_1 + 0x7f) = 1;
  }
  return;
}

